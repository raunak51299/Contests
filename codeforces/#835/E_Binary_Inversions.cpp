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
int find(vector<int> a, int n){
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1) cnt++;
        if(a[i] == 0) sum += cnt;
    }
    return sum;
}
void solve()
{
    int n; cin >> n;
    vi a(n);
    int one = 0;
    int zer = 0;
    int fone = -1, lone = -1, fzer = -1, lzer = -1;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[i] = temp;
        if(temp == 1){
            one++;
            if(fone == -1) fone = i;
            lone = i;
        }
        else{
            zer++;
            if(fzer == -1) fzer = i;
            lzer = i;
        }
    }
    if(one == n){
            cout << n-1 << endl;
            return;
    }
    if(zer == n){
        cout << n-1 << endl;
        return;
    }
    if(one > zer){
        for(int i =n-1 ; i >= 0; i--){
            if(a[i] == 1) a[i] = 0;;
            break;
        }
        cout << find(a, n) << endl;
        return;
    }
    else if(one < zer){
        for(int i = 0; i < n; i++){
            if(a[i] == 0) a[i] = 1;
            break;
        }
        cout << find(a, n) << endl;
        return;
    }
    else{
        if(fone < fzer){
            for(int i = 0; i < n; i++){
                if(a[i] == 0) a[i] = 1;
                break;
            }
            cout << find(a, n) << endl;
            return;
        }
        else{
            for(int i = n-1 ; i >= 0; i--){
                if(a[i] == 1) a[i] = 0;;
                break;
            }
            cout << find(a, n) << endl;
            return;
        }
    }
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