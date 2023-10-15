/*
You are given an array a
 consisting of n
 positive integers. You can perform the following operation on it:

Choose a pair of elements ai
 and aj
 (1≤i,j≤n
 and i≠j
);
Choose one of the divisors of the integer ai
, i.e., an integer x
 such that aimodx=0
;
Replace ai
 with aix
 and aj
 with aj⋅x
.
Determine whether it is possible to make all elements in the array the same by applying the operation a certain number of times (possibly zero).
For example, let's consider the array a
 = [100,2,50,10,1
] with 5
 elements. Perform two operations on it:

Choose a3=50
 and a2=2
, x=5
. Replace a3
 with a3x=505=10
, and a2
 with a2⋅x=2⋅5=10
. The resulting array is a
 = [100,10,10,10,1
];
Choose a1=100
 and a5=1
, x=10
. Replace a1
 with a1x=10010=10
, and a5
 with a5⋅x=1⋅10=10
. The resulting array is a
 = [10,10,10,10,10
].
After performing these operations, all elements in the array a
 become equal to 10
.
Input
The first line of the input contains a single integer t
 (1≤t≤2000
) — the number of test cases.

Then follows the description of each test case.

The first line of each test case contains a single integer n
 (1≤n≤104
) — the number of elements in the array a
.

The second line of each test case contains exactly n
 integers ai
 (1≤ai≤106
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 104
.

Output
For each test case, output a single line:

"YES" if it is possible to make all elements in the array equal by applying the operation a certain (possibly zero) number of times;
"NO" otherwise.
You can output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will all be recognized as a positive answer).

Example
inputCopy
7
5
100 2 50 10 1
3
1 1 1
4
8 2 4 2
4
30 50 27 20
2
75 40
2
4 4
3
2 3 1
outputCopy
YES
YES
NO
YES
NO
YES
NO
Note
The first test case is explained in the problem statement.
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
    vector<vector<char>> a(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    
    int ans = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            int a1, a2, a3, a4;
            a1 = a[i][j] - 'a';
            a2 = a[n-j-1][i] - 'a';
            a3 = a[j][n-i-1] - 'a';
            a4 = a[n-i-1][n-j-1] - 'a';
            vector<int> v = {a1, a2, a3, a4};
            sort(all(v));
            for(int k = 0; k < 3; k++){
                ans += v[3] - v[k];
            }
        }
    }
    cout << ans << "\n";
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