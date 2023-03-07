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
The score of a sequence [s1,s2,…,sd]
 is defined as s1⋅s2⋅…⋅sdd!
, where d!=1⋅2⋅…⋅d
. In particular, the score of an empty sequence is 1
.

For a sequence [s1,s2,…,sd]
, let m
 be the maximum score among all its subsequences. Its cost is defined as the maximum length of a subsequence with a score of m
.

You are given a non-decreasing sequence [a1,a2,…,an]
 of integers of length n
. In other words, the condition a1≤a2≤…≤an
 is satisfied. For each k=1,2,…,n
, find the cost of the sequence [a1,a2,…,ak]
.

A sequence x
 is a subsequence of a sequence y
 if x
 can be obtained from y
 by deletion of several (possibly, zero or all) elements.
*/
ll fact(ll n){
    for(int i = n-1; i >= 1; i--){
        n *= i;
    }
    return n;
}
void solve()
{
    ll n; cin >> n;
    vector<ll> a(n);
    input(a, 0, n-1);
    vector<ll> pre(n - 1, 0);
    vector<ll> ans(n - 1, 0);
    pre[0] = a[0];
    for(int i = 1; i < n; i++){
        ll score = 1, j = i, den = 1;
        while(a[j] == a[j-1] and den < a[j]){
            den++;
            score *= a[j];
        }
        score = score/ fact(den);
        pre[i] = max(pre[i], score);
    }
    output(pre, 0, n-1);
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