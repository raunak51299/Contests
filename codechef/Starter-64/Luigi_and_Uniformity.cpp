#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define us unordered_set<int>
#define vvi vector<vi>
#define vl vector<long>
#define vvl vector<vl>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define pb push_back
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
/* Luigi has an array AA of NN positive integers. He wants to make all elements of the array equal.

In one move, he can:

Choose an index ii (1\le i \le N)(1≤i≤N) and divide the element A_iA 
i
​
  by any one of its divisors.
In other words, he can choose a positive integer XX such that X | A_iX∣A 
i
​
  and set A_i := \frac{A_i}{X}A 
i
​
 := 
X
A 
i
​
 
​
 .
Find the minimum number of moves required to make all the elements of the array equal.
*/
void solve()
{
    int n;
    cin >> n;
    int a[n];
    input(a, 0, n-1);
    int y = a[0];
    for(int i = 1; i < n; i++){
        y = __gcd(y, a[i]);
    }
    int mx = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == y){
            count++;
        }
    }
    cout << n - count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}

