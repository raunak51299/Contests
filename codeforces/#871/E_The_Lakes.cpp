#include <bits/stdc++.h>
#define us unordered_set<int>
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<long>
#define vvl vector<vl>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define ll long long
#define pb push_back
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
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
 

void dfs(ll i, ll j, vector<vector<ll>> &mat, vector<vector<ll>> &vis, ll &vol){
    if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || vis[i][j] || mat[i][j] == 0) return;
    vis[i][j] = 1;
    vol += mat[i][j];
    dfs(i+1, j, mat, vis, vol);
    dfs(i-1, j, mat, vis, vol);
    dfs(i, j+1, mat, vis, vol);
    dfs(i, j-1, mat, vis, vol);
}

void solve()
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>> mat(n, vector<ll> (m, 0));
    vector<vector<ll>> vis(n, vector<ll> (m, 0));

    rep(i, 0, n - 1){
        rep(j, 0, m - 1){
            cin >> mat[i][j];
        }
    }

    ll res = 0;

    rep(i, 0, n - 1){
        rep(j, 0, m - 1){
            if(!vis[i][j]){
                ll vol = 0;
                dfs(i, j, mat, vis, vol);
                res = max(res, vol);
            }
        }
    }

    cout << res << endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}