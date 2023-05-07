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
Initially you have a single pile with n
 gold nuggets. In an operation you can do the following:

Take any pile and split it into two piles, so that one of the resulting piles has exactly twice as many gold nuggets as the other. (All piles should have an integer number of nuggets.)

One possible move is to take a pile of size 6
 and split it into piles of sizes 2
 and 4
, which is valid since 4
 is twice as large as 2
.

Can you make a pile with exactly m
 gold nuggets using zero or more operations?
Input
The first line contains an integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains two integers n
 and m
 (1≤n,m≤107
) — the starting and target pile sizes, respectively.

Output
For each test case, output "YES" if you can make a pile of size exactly m
, and "NO" otherwise.
*/

void solve2(int n, int target, int &flag){
    if(n == 0) return;
    if(n == target){
        flag = 1;
        return;
    }
    if(n < target){
        return;
    }
    if(n % 3 != 0){
        return;
    }
    solve2(n/3, target, flag);
    solve2(n - n/3, target, flag);
}

void solve()
{
    int flag = 0;
    int n, m; cin >> n >> m;
    if(n == m){
        cout << "YES" << endl;
        return;
    }
    if(n < m){
        cout << "NO" << endl;
        return;
    }
    if(n % 3 != 0){
        cout << "NO" << endl;
        return;
    }
    solve2(n/3, m, flag);
    solve2(n - n/3, m, flag);
    if(flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

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