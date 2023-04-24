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

/*
#include <iostream>
#include <cmath>
#include <queue>
#include <unordered_set>
#include <tuple>
using namespace std;

pair<int, int> get_cell_coordinates(int n, int x, int y) {
    int d = max(abs(x - n/2), abs(y - n/2));
    int r = d / 2;
    int p = (d % 2 == 0) ? ((x == n/2 + r) ? y - (n/2 - r)
                            : (y == n/2 + r) ? n - 1 - (x - (n/2 - r))
                            : (x == n/2 - r) ? n - 1 - (y - (n/2 - r))
                            : (y == n/2 - r) ? x - (n/2 - r)
                            : -1)
                          : ((x == n/2 + r + 1) ? n - 1 - (y - (n/2 - r - 1))
                            : (y == n/2 + r + 1) ? x - (n/2 - r - 1)
                            : (x == n/2 - r - 1) ? y - (n/2 - r - 1)
                            : (y == n/2 - r - 1) ? n - 1 - (x - (n/2 - r - 1))
                            : -1);
    return make_pair(r, p);
}

int get_min_energy(int n, int x1, int y1, int x2, int y2) {
    auto start = get_cell_coordinates(n, x1, y1);
    auto end = get_cell_coordinates(n, x2, y2);
    queue<pair<int, int>> q;
    unordered_set<pair<int, int>> visited;
    unordered_map<pair<int, int>, int> distance;
    q.push(start);
    visited.insert(start);
    distance[start] = 0;
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        if (curr == end) {
            return distance[curr];
        }
        int r = curr.first;
        int p = curr.second;
        for (auto [dr, dp] : vector<pair<int, int>>{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}) {
            int nr = r + dr;
            int np = p + dp;
            if (np < 0 || np >= nr * 6) continue;
            if (visited.count(make_pair(nr, np))) continue;
            visited.insert(make_pair(nr, np));
            distance[make_pair(nr, np)] = distance[curr] + 1;
            q.push(make_pair(nr, np));
        }
    }
    return -1; // end not reachable from start
}

int main() {
    int n = 8, x1 = 1, y1 = 3, x2 = 4, y2 = 6;
    int min_energy = get_min_energy(n, x1, y1, x2, y2);
    cout << "Minimum energy required: " << min_energy << endl; // Output: Minimum energy required: 10
    return 0;
}

*/

void solve()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int d1 = max(abs(x1 - n/2), abs(y1 - n/2));
    int d2 = max(abs(x2 - n/2), abs(y2 - n/2));
    int r1 = d1 / 2;
    int r2 = d2 / 2;
    cout << abs(r1 - r2) << endl;

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}