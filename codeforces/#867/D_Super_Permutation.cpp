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
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if(n%2 == 1){
        cout << -1 << endl;
        return;
    }
    vi a;
    us s;
    for(int i = n; i >= 1; i--)
    {
        if(s.find(i) == s.end())
        {
            a.pb(i);
            s.insert(i);
            s.insert(n-i+1);
        }
        else{
            a.pb(n-i+1);
            s.insert(n-i+1);
            s.insert(i);
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;


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