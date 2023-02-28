// Jai Shree Ram

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
/*The followers of Psycho-Helmet religion follow a peculiar calendar – a normal year contains NN days. Every KK-th year is a “MOB” year. For example, if K = 4K=4, then years 4, 8, 12, 16 \ldots4,8,12,16… are “MOB” years. A “MOB” year contains MM additional days i.e. it contains N+MN+M days.

Given XX, determine whether the day after (X-1)(X−1) days from Day 11 of Year 11 falls in a “MOB” year.*/
void solve()
{
    int n, m, k, x;
    cin >> n >> m >> k >> x;
    while(x--)
    {
        if(n == 1)
            n += m;
        n--;
    }
    if(n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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