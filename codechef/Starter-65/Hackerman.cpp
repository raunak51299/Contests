#include <bits/stdc++.h>
using namespace std;
unordered_set<int> s({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31});
void solve()
{
    int a, b;
    cin >> a >> b;
    if(s.find(a+b) != s.end()) cout << "Alice" <<endl;
    else cout << "Bob" << endl;    
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