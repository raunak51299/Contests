#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long f[1000001];
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i < 1000001; i++){
        f[i] = (i * f[i-1]) % mod;
    }
    int t; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        int temp, ans = 0;
        for(int i = 0; i < n; i++){
            cin >> temp;
            ans += f[temp];
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
