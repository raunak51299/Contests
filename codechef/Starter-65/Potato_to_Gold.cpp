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
You are given an array AA of NN integers and an integer KK. Find the number of (possibly empty) subsequences of AA such that no two elements in the subsequence have a sum that is divisible by KK.
*/
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    input(a, 0, n-1);
    // check how many subsequences are divisible by k by generating all the subsequences
    // and then checking if the sum of the elements is divisible by k
    int count = 0;
    for(int i = 0; i < (1<<n); i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(i & (1<<j)){
                sum += a[j];
            }
        }
        if(sum % k != 0){
            count++;
        }
    }
    // cout total number of subsequences minus the number of subsequences divisible by k
    cout << (1<<n) - count << endl;
    
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}