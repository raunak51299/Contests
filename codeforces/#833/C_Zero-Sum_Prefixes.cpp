#include <bits/stdc++.h>
using namespace std;
/*
The score of an array v1,v2,…,vn is defined as the number of indices i (1≤i≤n) such that v1+v2+…+vi=0.

You are given an array a1,a2,…,an of length n. You can perform the following operation multiple times:

select an index i (1≤i≤n) such that ai=0;
then replace ai by an arbitrary integer.
What is the maximum possible score of a that can be obtained by performing a sequence of such operations?
*/
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for(int i = 1; i < n - 2; i++)
    {
        if(a[i] == 0 and prefix[i] != 0 and prefix[i] == prefix[i + 1])
        {
            a[i] = -(prefix[i-1] + a[i+1]);
        }
        else if(a[i] == 0 and prefix[i] != 0 and prefix[i] != prefix[i + 1])
        {
            a[i] = -prefix[i];
        }
    }
    prefix[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    int ans = 0;
    // count the number of zeroes
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] == 0)
            ans++;
    }
    cout << ans << endl;
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