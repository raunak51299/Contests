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
 In a class of 
�
N students, a class test was held. The 
�
�
ℎ
i 
th
  student scored 
�
�
A 
i
​
  marks. It is also known that the scores of all students were distinct.

A student passes the test if their score is strictly greater than the passing mark. Given that exactly 
�
X students pass in the test, find the maximum value of the passing mark of the test.
 */
void solve()
{
    int n, x; cin >> n >> x;
    vi a(n);
    input(a, 0, n - 1);
    sort(all(a));
    
    if(n == x) cout << 0 << endl;
    else cout << max(0, a[n - x - 1] - a[n - x] + 1) << endl;
    
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