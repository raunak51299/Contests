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

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    vector <pair<int, int>> v(26, {0, 0});
    for(int i = 0; i < n; i++){
        int j = i;
        while(j < n && s[j] == s[i])
        {
            j++;
            if(j - i > v[s[i] - 'a'].first)
            {
                v[s[i] - 'a'].second = v[s[i] - 'a'].first;
                v[s[i] - 'a'].first = j - i;
            }
            else if(j - i > v[s[i] - 'a'].second)
                v[s[i] - 'a'].second = j - i;
        }
        i = j - 1;
    }
    int ans = 0;
    for(int i = 0; i < 26; i++)
        if(v[i].first > 0 && v[i].second > 0)
            ans = max(ans, min(v[i].first, v[i].second));
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