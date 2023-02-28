#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int a[26] = {0};
    for(int i = 0; i < n; i++){
        a[s[i] - 'a']++;
    }
    int flag = 0;
    for(int i = 0; i < 26; i++){
        if(a[i]&1){
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
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