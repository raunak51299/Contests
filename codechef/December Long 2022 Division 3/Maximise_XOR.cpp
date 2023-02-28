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
    string s1, s2;
    cin >> s1 >> s2;
    int ones = 0, zeros = 0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == '1') ones++;
        if(s1[i] == '0') zeros++;
        if(s2[i] == '1') ones++; 
        if(s2[i] == '0') zeros++;
    }
    string ans = "";
    for(int i = 0; i < min(ones, zeros) and i < s1.size(); i++){
        ans += "1";
    }
    for(int i = 0; i < s1.size() and ans.size() < s1.size(); i++){
        ans += "0";
    }
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