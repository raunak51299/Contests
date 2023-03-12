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
/*
There are
N people whose IDs are
1,
2,
…, and
N.

Each of person
1, person
2,
…, and person
N performs the following action once in this order:

If person
i's ID has not been called out yet, call out person
A
i
​
 's ID.
Enumerate the IDs of all the people whose IDs are never called out until the end in ascending order.
*/
void solve()
{
    int n;
    cin >> n;
    vi v(n, 0);
    vector<int> ans;
    rep(i, 0, n - 1)
    {
        int a;
        cin >> a;
        if (v[i] == 0)
            v[a - 1]++;
    }
    rep(i, 0, n - 1)
    {
        if (v[i] == 0)
            ans.pb(i + 1);
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t; cin >> t;
    // while(t--)
    solve();
    return 0;
}