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

vector<int> par, rank_;

int find(int a)
{

    while (par[a] != a)
    {
        // Path compression
        par[a] = par[par[a]];
        a = par[a];
    }
    return a;
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);

    if (rank_[a] > rank_[b])
    {
        par[b] = a;
    }
    else if (rank_[b] > rank_[a])
    {
        par[a] = b;
    }
    else
    {
        par[a] = b;
        rank_[b]++;
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;

    //Initialize parent array and rank array for union find.
    par.resize(n + 1);
    rank_.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {

        par[i] = i;
        rank_[i] = 0;
    }

    int a, b, c, d;
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {

        cin >> a >> b >> c >> d;

        if (find(a) != find(c))
            merge(a, c);

        if (find(b) != find(d))
            merge(b, d);
    }

    //Count the number of unique Parent nodes
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(find(i));
    }

    //Total number of groups of ropes
    int group_cnt = (int)(s.size());

    //outputting the disconnected groups of ropes
    cout << group_cnt - cnt<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t; cin >> t;
    // while(t--)
        solve();
    return 0;
}