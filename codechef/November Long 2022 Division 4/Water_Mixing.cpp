#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a > b){
        if(a - b <= y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else if(a < b){
        if(b - a <= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "YES" << endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}