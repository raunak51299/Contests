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
here is a grid with
H horizontal rows and
W vertical columns. For two integers
i and
j such that
1≤i≤H and
1≤j≤W, the square at the
i-th row from the top and
j-th column from the left (which we denote by
(i,j)) has an integer
A
i,j
​
  written on it.

Takahashi is currently at
(1,1). From now on, he repeats moving to an adjacent square to the right of or below his current square until he reaches
(H,W). When he makes a move, he is not allowed to go outside the grid.

Takahashi will be happy if the integers written on the squares he visits (including initial
(1,1) and final
(H,W)) are distinct. Find the number of his possible paths that make him happy.
*/
ll combination(int n, int r)
{
    ll ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

void solve()
{
    int H, W;
    cin >> W >> H;
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> dp(H, vector<int>(W));
    dp[0][0] = 1;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i > 0 && A[i][j] != A[i-1][j] && dp[i-1][j]) {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= Mod;
            }
            if (j > 0 && A[i][j] != A[i][j-1] && dp[i][j-1]) {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= Mod;
            }
        }
    }

    cout << dp[H-1][W-1] << endl;
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