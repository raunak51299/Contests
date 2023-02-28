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
    vi a(n);
    input(a, 0, n - 1);

    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
        m[a[i]]++;

    int max_freq = 0, max_element = 0;
    for(auto i : m)
        if(i.second > max_freq)
        {
            max_freq = i.second;
            max_element = i.first;
        }

    if(max_freq > (n+1) / 2)
    {
        cout << -1 << endl;
        return;
    }

    vi ans(n);
    int index = 0;
    while(max_freq)
    {
        ans[index] = max_element;
        index += 2;
        max_freq--;
    }
    m[max_element] = 0;

    for(auto i : m)
    {
        while(i.second)
        {
            if(index >= n)
                index = 1;
            ans[index] = i.first;
            index += 2;
            i.second--;
        }
    }

        
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
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