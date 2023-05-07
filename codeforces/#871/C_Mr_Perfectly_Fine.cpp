
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
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int ans1 = 0;
    for(int i = 0; i < n; i++){
        if(v[i].second[0] == '1' and v[i].second[1] == '1'){
            ans1 += v[i].first;
            break;
        }
    }
    if(ans1 == 0) ans1 = INT_MAX;
    int ans = 0;
    int skill1 = 0, skill2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(skill1 == 0 and skill2 == 0 and v[i].second[0] == '1' and v[i].second[1] == '1'){
            ans += v[i].first;
            skill1 = 1;
            skill2 = 1;
            break;
        }
        else if (v[i].second[0] == '1' && skill1 == 0)
        {
            ans += v[i].first;
            skill1 = 1;
        }
        else if (v[i].second[1] == '1' && skill2 == 0)
        {
            ans += v[i].first;
            skill2 = 1;
        }
    }

    if (skill1 == 1 && skill2 == 1)
    {
        cout << min(ans1, ans) << "\n";
        return;
    }

    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}