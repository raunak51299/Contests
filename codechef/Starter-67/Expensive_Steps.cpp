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

int in(int a1, int a2, int b1, int b2){
    return abs(a1 - b1) + abs(a2 - b2);
}
int out(int a1, int a2, int b1, int b2,int n){
    return min(min(a1, n-a1+1), min(a2, n-a2+1)) + min(min(b1, n-b1+1), min(b2, n-b2+1));
}

void solve()
{
    int n, a1, a2, b1, b2; cin >> n >> a1 >> a2 >> b1 >> b2;
    cout << min(in(a1, a2, b1, b2), out(a1, a2, b1, b2, n)) << endl;
    
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