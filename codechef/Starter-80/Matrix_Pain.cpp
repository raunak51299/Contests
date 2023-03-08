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
Chef is here with another matrix
�
A having
�
N rows and
�
M columns,
such that
�
(
�
,
�
)
=
(
�
−
1
)
⋅
�
+
�
A
(i,j)
​
 =(i−1)⋅M+j.

Chef decided to make this matrix interesting. He performed
�
K operations on the matrix. In each operation, he will choose either a row or column and multiply all values in that row/column with a non-negative integer
�
V.

An operation is of the form
�
,
�
,
�
Q,X,V:
If
�
=
0
:
Q=0: Multiply each element of the
�
�
ℎ
X
th
  row with
�
V.
If
�
=
1
:
Q=1: Multiply each element of the
�
�
ℎ
X
th
  column with
�
V.
Find the sum of all values in the matrix after all
�
K operations are done. Since the value can be large, print it modulo
1
0
9
+
7
10
9
 +7.
*/
void solve()
{
    int N, M, K;
    cin >> N >> M >> K;
    vi rows(N, 0);
    vi cols(M, 0);
    // fill all rows and cols according to the rule A(i,j) = (i-1)*M + j
    for (int i = 0; i < N; i++)
        rows[i] = i * M;
    for (int i = 0; i < M; i++)
        cols[i] = i + 1;

    while (K--)
    {
        int Q, X, V;
        cin >> Q >> X >> V;
        if (Q == 0)
        {
            for (int i = 0; i < M; i++)
                cols[i] = (cols[i] + rows[X - 1] * V) % Mod;
        }
        else
        {
            for (int i = 0; i < N; i++)
                rows[i] = (rows[i] + cols[X - 1] * V) % Mod;
        }
    }
    ll ans = 0;
    // add all the elements of the matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            ans = (ans + rows[i] + cols[j]) % Mod;
    cout << ans << endl;
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