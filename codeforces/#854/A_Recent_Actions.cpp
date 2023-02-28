/*
On Codeforces the "Recent Actions" field shows the last n
 posts with recent actions.

Initially, there are posts 1,2,…,n
 in the field (this is in order from top to down). Also there are infinitely many posts not in the field, numbered with integers n+1,n+2,…
.

When recent action happens in the post p
:

If it is in the "Recent Actions" field, it moves from its position to the top position.
Otherwise, it is added to the top position, and the post on the down position is removed from the "Recent Actions" field.
You know, that the next m
 recent actions will happen in the posts p1,p2,…,pm
 (n+1≤pi≤n+m
) in the moments of time 1,2,…,m
. Note, that recent actions only happen with posts with numbers ≥n+1
.

For each post i
 (1≤i≤n
), find the first time it will be removed from the "Recent Actions" field or say, that it won't be removed.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Descriptions of test cases follow.

The first line of each test case contains two integers n
, m
 (1≤n,m≤5⋅104
) — the size of the "Recent Actions" field and the number of actions.

The next line contains m
 integers p1,p2,…,pm
 (n+1≤pi≤n+m
).

It is guaranteed, that the sum of n
 and the sum of m
 for all test cases does not exceed 5⋅104
.

Output
For each test case print n
 integers t1,t2,…,tn
, where ti=−1
 if the post i
 won't be removed or ti
 equals to the first moment of time the post i
 will be removed (1≤ti≤m
).
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
    int n, m; cin >> n >> m;
    vi ans(n, -1);
    unordered_set<int> s;
    int last = n-1; 
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        if(s.count(a)) continue;
        s.insert(a);
        if(last < 0) continue;
        ans[last--] = i + 1;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
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