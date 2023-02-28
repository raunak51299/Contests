// /*
// You are given an array a consisting of n integers. You want to distribute these n integers into two groups s1 and s2 (groups can be empty) so that the following conditions are satisfied:

// For each i (1≤i≤n), ai goes into exactly one group.
// The value |sum(s1)|−|sum(s2)| is the maximum possible among all such ways to distribute the integers.
// Here sum(s1) denotes the sum of the numbers in the group s1, and sum(s2) denotes the sum of the numbers in the group s2.

// Determine the maximum possible value of |sum(s1)|−|sum(s2)|.
// */
// #include <bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define us unordered_set<int>
// #define vvi vector<vi>
// #define vl vector<long>
// #define vvl vector<vl>
// #define vll vector<ll>
// #define vvll vector<vll>
// #define vb vector<bool>
// #define pb push_back
// #define all(a) a.begin(), a.end()
// #define allr(a) a.rbegin(), a.rend()
// #define mp make_pair
// #define rep(a, b, c) for (long long a = b; a <= c; ++a)
// #define repr(a, b, c) for (long long a = b; a >= c; --a)
// #define input(a, b, n)                 \
//     for (long long i = b; i <= n; ++i) \
//         cin >> a[i];
// #define output(a, b, n)                \
//     for (long long i = b; i <= n; ++i) \
//         cout << a[i] << " ";
// #define Mod 1000000007
// using namespace std;

// void solve()
// {
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int sum = 0, pos = 0, neg = 0;
//         for(int i = 0; i < n; i++){
//             int temp;
//             cin >> temp;
//             if(temp > 0) pos +=temp;
//             else neg += temp;
//         }
//         sum = abs(abs(pos) - abs(neg));
//         cout << sum << endl;
//     }
// }   
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
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
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sum = 0;
        for(int i = 0; i < n; ++i){
            ll num;
            cin >> num;
            sum += num;
        }
        cout << abs(sum) << endl;
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