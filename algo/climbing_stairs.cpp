#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return rec(n-1) + rec(n-2);
    
}

int mem(int n, vector<int>& dp){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = mem(n-1, dp) + mem(n-2, dp);
    
}

int tab(int n, vector<int>& dp){
    dp[0] = 1; dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int space_opt(int n){
int cur, prev1 = 1, prev2 = 1;
    for(int i=2; i<=n; i++){
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
     return cur;
}

int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<rec(n)<<endl;
    cout<<mem(n, dp)<<endl;   
    cout<<tab(n, dp)<<endl;
    cout<<space_opt(n)<<endl;
}