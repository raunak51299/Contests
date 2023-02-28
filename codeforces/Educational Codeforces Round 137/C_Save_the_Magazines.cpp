#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define us unordered_set<int>
#define vvi vector<vi>
#define vl vector<long>
#define vvl vector<vl>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define pb push_back
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mp make_pair
#define rep(a, b, c) for (long long a = b; a <= c; ++a)
#define repr(a, b, c) for (long long a = b; a >= c; --a)
#define input(a, b, n)                 \
    for (long long i = b; i <= n; ++i) \
        cin >> a[i];
#define output(a, b, n)                \
    for (long long i = b; i <= n; ++i) \
        cout << a[i] << " ";
#define Mod 1000000007
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int arr[n];
        input(arr, 0, n-1);
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '1' and i == 0){
                ans += arr[0];                
            }
            else if(s[i] == '1'){
                if(s[i-1] == '0' and arr[i-1] > arr[i]){
                    ans += arr[i-1];
                    s[i-1] = '1';
                    s[i] = '0';
                }
                else if(s[i-1] == '0' and arr[i-1] < arr[i]){
                    ans += arr[i];
                }
                else if(s[i-1] == '1'){
                    ans += arr[i];
                }
                
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    solve();
    return 0;
}