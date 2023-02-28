#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for(int i = 0; i < 2*n; i++){
        int temp;
        cin >> temp;
        m[temp]++;
    } 
    for(auto i: m){
        if(i.second > 2){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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