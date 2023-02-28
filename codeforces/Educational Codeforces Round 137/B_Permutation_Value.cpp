/*
You are given an integer n. You have to construct a permutation of size n.

A permutation is an array where each integer from 1 to s (where s is the size of permutation) occurs exactly once. For example, [2,1,4,3] is a permutation of size 4; [1,2,4,5,3] is a permutation of size 5; [1,4,3] is not a permutation (the integer 2 is absent), [2,1,3,1] is not a permutation (the integer 1 appears twice).

A subsegment of a permutation is a contiguous subsequence of that permutation. For example, the permutation [2,1,4,3] has 10 subsegments: [2], [2,1], [2,1,4], [2,1,4,3], [1], [1,4], [1,4,3], [4], [4,3] and [3].

The value of the permutation is the number of its subsegments which are also permutations. For example, the value of [2,1,4,3] is 3 since the subsegments [2,1], [1] and [2,1,4,3] are permutations.

You have to construct a permutation of size n with minimum possible value among all permutations of size n.

Example:
input
2
5
6
output
1 4 3 5 2
4 1 6 2 5 3
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
        cout << "1";
        for(int i = n; i >1; i--){
            cout << " " << i;
        }
        cout<<endl;
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