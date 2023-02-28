#include <bits/stdc++.h>
using namespace std;
/**/
void solve()
{
    int n;
    cin >> n;
    if(n % 2 != 0) cout << (int)ceil(n/2) +1 << endl;
    else cout << (int)ceil(n/2) << endl;
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