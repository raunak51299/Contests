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

bool iequals(char a, char b)
{
    return tolower(a) == tolower(b);
}


void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int flag = 0;
    if(n < 3 or tolower(s[0]) != 'm'){
        cout << "NO" << endl;
        return;
    }
    vector<char> cat = {'m', 'e', 'o', 'w'};
    int ptr = 0;
    for(int i = 0; i < n and ptr < 4; i++){
        if(iequals(s[i], cat[ptr])) continue;
        if(iequals(s[i], cat[ptr + 1])){
            ptr++;
            continue;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    if(ptr == 3){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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