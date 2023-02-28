#include <bits/stdc++.h>
using namespace std;

int fib_mem(int n, vector<int>& dp){
    
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];   
    return dp[n] = fib_mem(n-1, dp) + fib_mem(n-2, dp);      
}

int fib_tab(int n, vector<int>& dp){
    dp[0] = 0; dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}

int fib_space_opt(int n){
    int cur, prev1 = 1, prev2 = 0;
    for(int i = 2; i<=n; i++){
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
    cout<<fib_space_opt(n)<<'\n';
    cout<<fib_mem(n, dp)<<'\n';
    cout<<fib_tab(n, dp)<<'\n';
    
}