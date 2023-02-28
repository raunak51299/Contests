/*
Tracy gives Charlie a Directed Acyclic Graph with NN vertices. Among these NN vertices, KK vertices are sources, and LL vertices are sinks.

Find out the maximum number of edges this graph can have.
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    //Find out the maximum number of edges this graph can have.
    int max_edges = (n - 1) * (n - 2) / 2;
    int min_edges = n - 1 - k - l;
    if (min_edges < 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << max_edges - min_edges << endl;
    

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