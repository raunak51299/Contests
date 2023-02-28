

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
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "YES" << endl;
        cout << a << endl;
        return;
    }
    int n = a.size(), m = b.size();
    vvi dp(n + 1, vi(m + 1, 0));
    int ans = 0, x = 0, y = 0;
    rep(i, 1, n)
    {
        rep(j, 1, m)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                if (dp[i][j] > ans)
                {
                    ans = dp[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }
    if (ans == 0)
    {
        cout << "NO" << endl;
        return;
    }
    string s = "";
    while (x > 0 && y > 0)
    {
        if (a[x - 1] == b[y - 1])
        {
            s += a[x - 1];
            x--;
            y--;
        }
        else
        {
            break;
        }
    }
    reverse(all(s));
    
    
    if(a.find(s)==0 && b.find(s)==0){
        cout<<"YES"<<endl;
        cout<<s<<"*"<<endl;
        return;
    }
    
    if(a.find(s)==n-s.size() && b.find(s)==m-s.size()){
        cout<<"YES"<<endl;
        cout<<"*"<<s<<endl;
        return;
    }
    if(a.find(s)!=0 && b.find(s)!=0 && a.find(s)!=n-s.size() && b.find(s)!=m-s.size() && s.length() == 1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    cout<<"*"<<s<<"*"<<endl;
    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}