/*
You are given an integer n.

Let's define s(n) as the string "BAN" concatenated n times. For example, s(1) = "BAN", s(3) = "BANBANBAN". Note that the length of the string s(n) is equal to 3n.

Consider s(n). You can perform the following operation on s(n) any number of times (possibly zero):

Select any two distinct indices i and j (1≤i,j≤3n,i≠j).
Then, swap s(n)i and s(n)j.
You want the string "BAN" to not appear in s(n) as a subsequence. What's the smallest number of operations you have to do to achieve this? Also, find one such shortest sequence of operations.

A string a is a subsequence of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters.
*/
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

void solve()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}