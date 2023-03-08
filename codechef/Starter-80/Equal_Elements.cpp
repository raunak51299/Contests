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

//frequency of most frequent element in an array in O(n) time and O(n) space 

int maxFreq(vi &v, int n)
{
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
        m[v[i]]++;
    int max = 0;
    for(auto i : m)
    {
        if(i.second > max)
            max = i.second;
    }
    return max;
}
void solve()
{
    int n; cin >> n;
    vi v(n);
    input(v, 0, n-1);
    int f = maxFreq(v, n);
    //cout << f << endl;
    cout << n - f << endl;

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