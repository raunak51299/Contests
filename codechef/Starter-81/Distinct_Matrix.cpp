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
You are given an integer 
�
N. Generate a matrix of size 
�
×
�
N×N such that:

Each element of the matrix is either 0 or 1;
All rows (from left to right) and all columns (from top to bottom) are distinct.
In other words, the 
2
⋅
�
2⋅N strings, that are obtained from the rows and columns of the matrix, are all distinct.
If multiple such matrices exist, print any. If no such matrix exists, print 
−
1
−1 instead.
*/
void solve()
{
    int n;
    cin >> n;
    vvi a(n, vi(n, 0));
    int i = 0, j = 0;
    int k = 1;
    while (k <= n * n)
    {
        a[i][j] = k;
        k++;
        if (i == 0)
        {
            j++;
        }
        else
        {
            i--;
            j++;
        }
        if (j == n)
        {
            i += 2;
            j--;
        }
        if (i == n)
        {
            i--;
            j += 2;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
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