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
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    input(arr, 0, n-1);
    input(arr1, 0, n-1);
    if(arr[0]!=arr1[0] or arr[n-1]!=arr1[n-1]){
        cout<<"NO" << endl;
        return;
    }

    int a=0, b=0;
    rep(i, 0, n-1){
        if(arr[i]==0) a++;
        else b++;
    }
    rep(i, 1, n-1)
    {
        if((arr[i]!=arr1[i] and arr[i]==0 and b==0) or (arr[i]!=arr1[i] and arr[i]==1))
        {
            cout <<"NO" << endl;
            return;
        }
    }
    cout<<"YES" << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 return 0;
}