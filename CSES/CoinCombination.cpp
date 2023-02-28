#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mod = 1e9+7;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(j <= i){
                (dp[i] += dp[i - j]) %= mod;
            }
        }
    }
    cout << dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}