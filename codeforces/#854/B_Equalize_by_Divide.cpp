/*
You are given an array a1,a2,…,an
 of positive integers.

You can make this operation multiple (possibly zero) times:

Choose two indices i
, j
 (1≤i,j≤n
, i≠j
).
Assign ai:=⌈aiaj⌉
. Here ⌈x⌉
 denotes x
 rounded up to the nearest integer.
Is it possible to make all array elements equal by some sequence of operations (possibly empty)? If yes, print any way to do it in at most 30n
 operations.

It can be proven, that under the problem constraints, if some way exists to make all elements equal, there exists a way with at most 30n
 operations.

 Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. Descriptions of test cases follow.

The first line of each test case description contains a single integer n
 (1≤n≤100
).

The second line of each test case description contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

It is guaranteed, that the sum of n
 for all test cases does not exceed 1000
.

Output
For each test case print a single integer q
 (−1≤q≤30n
). If q=−1
, there is no solution, otherwise q
 is equal to the number of operations.

If q≥0
, on the next q
 lines print two integers i
, j
 (1≤i,j≤n
, i≠j
) — descriptions of operations.

If there are multiple solutions, you can print any.

*/
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
    int n; cin >> n;
    vi a(n);
    input(a, 0, n - 1);
    int q = 0;
    vi ans;
    while (true)
    {
        int mx = *max_element(all(a));
        int mn = *min_element(all(a));
        if (mx == mn)
            break;
        int idx = -1;
        rep(i, 0, n - 1)
        {
            if (a[i] == mx)
            {
                idx = i;
                break;
            }
        }
        rep(i, 0, n - 1)
        {
            if (a[i] == mn)
            {
                ans.pb(idx + 1);
                ans.pb(i + 1);
                a[idx] = (a[idx] + a[i] + 1) / 2;
                q++;
                break;
            }
        }
    }
    cout << q << endl;
    rep(i, 0, ans.size() - 1)
    {
        cout << ans[i] << " ";
        if (i % 2 == 1)
            cout << endl;
    }
}
        
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}