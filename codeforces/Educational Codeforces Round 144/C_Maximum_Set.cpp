/*
A set of positive integers S
 is called beautiful if, for every two integers x
 and y
 from this set, either x
 divides y
 or y
 divides x
 (or both).

You are given two integers l
 and r
. Consider all beautiful sets consisting of integers not less than l
 and not greater than r
. You have to print two numbers:

the maximum possible size of a beautiful set where all elements are from l
 to r
;
the number of beautiful sets consisting of integers from l
 to r
 with the maximum possible size.
Since the second number can be very large, print it modulo 998244353
.

Input
The first line contains one integer t
 (1≤t≤2⋅104
) — the number of test cases.

Each test case consists of one line containing two integers l
 and r
 (1≤l≤r≤106
).

Output
For each test case, print two integers — the maximum possible size of a beautiful set consisting of integers from l
 to r
, and the number of such sets with maximum possible size. Since the second number can be very large, print it modulo 998244353
.
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
#define Mod 998244353
using namespace std;
 
void solve()
{
    int l, r; cin >> l >> r;
    int size = 0, num = 0;
    int i = l;
    while(i <= r){
        i *= 2;
        size++;
    }
    
    for(int i = l; i <= r; i++){
        for(int j = 2; j <= r/l; j++)
            if(i*pow(j, size-1) <= r) (num += 1)%Mod;
    }
    cout << size << " " << num <<endl;
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