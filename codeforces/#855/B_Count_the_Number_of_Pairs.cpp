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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<int, int>> alp(26, {0, 0});
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            alp[s[i] - 'a'].first++;
        }
        else
        {
            alp[s[i] - 'A'].second++;
        }
    }

    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans += min(alp[i].first, alp[i].second);
        if (k >= 0)
        {
            ans += min((abs(alp[i].first - alp[i].second) / 2), k);
            k -= min((abs(alp[i].first - alp[i].second) / 2), k);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}