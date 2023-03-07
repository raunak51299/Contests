/*
You are given an unweighted tree of n
 vertices numbered from 1
 to n
 and a list of n−1
 integers a1,a2,…,an−1
. A tree is a connected undirected graph without cycles. You will use each element of the list to label one vertex. No vertex should be labeled twice. You can label the only remaining unlabeled vertex with any integer.

A vertex x
 is called good if it is possible to do this labeling so that for each vertex i
, its label is the distance between x
 and i
. The distance between two vertices s
 and t
 on a tree is the minimum number of edges on a path that starts at vertex s
 and ends at vertex t
.

Find all good vertices.
*/
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
    vi lable;
    for(int i = 0; i < n-1; i++){
        int x; cin >> x;
        lable.pb(x);
    }
    vi adj[n+1];
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    //use floyd warshall to find the distance between all pairs of nodes
    int dist[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dist[i][j] = INT_MAX;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < adj[i].size(); j++){
            dist[i][adj[i][j]] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        dist[i][i] = 0;
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    //now we have the distance between all pairs of nodes
    //now we have to find the good vertices
    int ans = 0;
    vi nodes;
    //use every node as the root and check if it is a good vertex
    for(int i = 1; i <= n; i++){
        bool flag = true;
        for(int j = 1; j <= n; j++){
            if(dist[i][j] != lable[dist[i][j] - 1]){
                flag = false;
                break;
            }
        }
        if(flag){
            ans++;
            nodes.pb(i);
        }
    }
    cout << ans << endl;
    output(nodes, 0, ans-1)

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //int t; cin >> t;
    //while(t--)
        solve();
    return 0;
}