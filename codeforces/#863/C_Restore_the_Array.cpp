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
    int s;
    cin >> s;
    vi b(s);
    input(b, 0, s - 2);
    int n = b.size() + 1;
    vector<int> a(n);
    if (b[0] >= b[1])
    {
        a[0] = b[0];
        a[1] = max(b[1], b[0]);
    }
    else
    {
        a[0] = max(b[0], b[1]);
        a[1] = b[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i - 1] == b[i - 1])
        {
            a[i] = b[i - 1];
        }
        else
        {
            a[i] = max(b[i - 2], b[i - 1]);
        }
    }
    auto ans = vector<int>(a.begin() + 1, a.end());
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}