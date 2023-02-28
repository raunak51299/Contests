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

void solve()
{
    int n; cin >> n;
    vi a(n);
    input(a, 0, n - 1);
    //sort(a.begin(), a.end());
    if(n < 3){
        cout << -1 << endl;
        return;
    }
    else{
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(a[k] == a[i] + a[j] and i != j and i != k and k != j){
                        cout << k+1<< " " << j+1 << " " << i+1;
                        return;
                    }
                }
            }
        }
        cout << "-1" << endl;
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