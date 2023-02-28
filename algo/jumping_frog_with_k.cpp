#include <bits/stdc++.h>
using namespace std;

int rec(int n,int k, vector<int> &heights){
    int ans = INT_MAX;
    if(n==0) return 0;
    int jump;
    for(int i = 1; i <= k; i++){
        if(n-i>=0){
            jump = rec(n-i, k, heights) + abs(heights[n]-heights[n-i]);
            ans = min(ans, jump);
        }
    }
    return ans;

    
}



// int mem(int n, vector<int>& heights){
//     vector<int> arr((n+1), -1);
//     arr[0] = 0;
//     if(arr[n] != -1)   return arr[n];
//     int right = INT_MAX;
//     int left = rec(n-1, heights) + abs(heights[n]-heights[n-1]);
//     if(n>1){
//         right = rec(n-2, heights) + abs(heights[n]-heights[n-2]);
//     }
//     return arr[n] = min(left, right);

// }

// int tab(int n, vector<int>& heights){
//     vector<int> arr((n+1), -1);
//     arr[0] = 0; arr[1] = abs(heights[1] - heights[0]);
//     for(int i=2; i<=n; i++){
//         arr[i] = min(abs(heights[i]-heights[i-1]) + arr[i-1] ,abs(heights[i]-heights[i-2]) + arr[i-2]);
//     }
//     return arr[n];
// }

// int space_opt(int n,vector<int>& heights){
//     int cur, prev1, prev2;
//     prev2 = 0; prev1 = abs(heights[1] - heights[0]);
//     for(int i=2; i<=n; i++){
//         cur = min(abs(heights[i]-heights[i-1]) + prev1 ,abs(heights[i]-heights[i-2]) + prev2);
//         prev2 = prev1;
//         prev1 = cur;
//     }
//     return cur;
// }

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>h(n);
    for(int i = 0; i < n; ++i){
        cin >> h[i];
    }
    int ans = rec(n-1, k, h);
    cout << ans << endl;
}