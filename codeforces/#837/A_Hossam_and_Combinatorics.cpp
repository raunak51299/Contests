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
    int n;
    cin >> n;
    vi  arr(n);
    input(arr, 0, n-1);
    sort(all(arr));
    int l =  1, r = 1;
    bool ch = true, ch2 = true;
    for(int i = 0; i < n-1; ++i){
        if(arr[i] == arr[i+1] and ch)
            ++l;
        else
            ch = false;
        if(arr[n-1-i] == arr[n-2-i] and ch2)
            ++r;
        else 
            ch2 = false;
    }
    ll ans = 2*l*r;
    if(l == n)
        ans = (ll)n*(n-1);
    // cout <<l << " " << r << " " <<  ans << endl;
    cout << ans << endl;
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