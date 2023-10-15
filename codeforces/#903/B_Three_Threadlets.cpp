
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
    int a, b, c; 
    cin >> a >> b >> c;
    int m = min(a, min(b, c));
    bool pos = true;
    int cnt = 0;
    if(a%m != 0 || b%m != 0 || c%m != 0)
        pos = false;
    while(a!=m){
        if(a%m != 0 || cnt > 3){
            pos = false;
            break;
        }
        a = a - m;
        cnt++;
    }
    while(b!=m){
        if(b%m != 0 || cnt > 3){
            pos = false;
            break;
        }
        b = b - m;
        cnt++;
    }
    while(c!=m){
        if(c%m != 0 || cnt > 3){
            pos = false;
            break;
        }
        c = c - m;
        cnt++;
    }
    if(cnt > 3)
        pos = false;
    if(pos != 0) cout << "YES\n";
    else cout << "NO\n";

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