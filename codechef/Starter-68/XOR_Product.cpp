// Jai Shree Ram

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
Chef has an array AA of length NN.

He can modify this array by applying a special operation any number of times. In one operation, he can:

Select two indices ii and jj (1\le i \lt j \le |A|)(1≤i<j≤∣A∣).
Append A_i \oplus A_jA 
i
​
 ⊕A 
j
​
  to the end of the array, where \oplus⊕ denotes the bitwise XOR operation
Remove A_iA 
i
​
  and A_jA 
j
​
  from the array.
Chef wants to maximize the product of all the elements of the array after applying these operations.

Help Chef determine the maximum product he can achieve by applying this operation any (possibly zero) number of times. As this number can be large, print it modulo 998244353998244353.
*/
void solve()
{
    int n; cin >> n;
    vector <int> v(n);
    input(v, 0, n - 1);
    
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