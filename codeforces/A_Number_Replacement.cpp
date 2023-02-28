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
        cin>>n;
        int a[n];
        input(a,0,n-1);
        string s;
        cin>>s;
        unordered_map<int,char> m;
        int flag = 0;
        for(int i = 0; i<n; i++){
            if(m.find(a[i]) == m.end()){
                m[a[i]] = s[i];
            }
            else{
                if(m[a[i]] != s[i]){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    solve();
    return 0;
}