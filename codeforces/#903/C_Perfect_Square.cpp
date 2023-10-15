/*
Kristina has a matrix of size n
 by n
, filled with lowercase Latin letters. The value of n
 is even.

She wants to change some characters so that her matrix becomes a perfect square. A matrix is called a perfect square if it remains unchanged when rotated 90∘
 clockwise once.

Here is an example of rotating a matrix by 90∘
:


In one operation, Kristina can choose any cell and replace its value with the next character in the alphabet. If the character is equal to "z", its value does not change.

Find the minimum number of operations required to make the matrix a perfect square.

For example, if the 4
 by 4
 matrix looks like this:

abbabccbbbcbabba
then it is enough to apply 1
 operation to the letter b, highlighted in bold.

Input
The first line of the input contains a single integer t
 (1≤t≤102
) — the number of test cases.

Then follows the description of each test case.

The first line of each test case contains a single even integer n
 (2≤n≤103
) — the number of rows and columns in the matrix.

Then follows n
 lines, each containing exactly n
 lowercase Latin letters.

It is guaranteed that the sum of n
 over all test cases does not exceed 103
.

Output
For each test case, output a single number on a separate line: the minimum number of operations required for Kristina to obtain a perfect square.

Example
inputCopy
5
4
abba
bcbb
bccb
abba
2
ab
ba
6
codefo
rcesco
deforc
escode
forces
codefo
4
baaa
abba
baba
baab
4
bbaa
abba
aaba
abba
outputCopy
1
2
181
5
9
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