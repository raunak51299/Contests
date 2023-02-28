#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll m;
    cin>>m;
    while(m--){
        ll n, sum=0;
        cin>>n;
        ll a[n], b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll s1, s2;
        for(ll i=0;i<n-1;i++){
            s1 = abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
            s2 = abs(a[i]-b[i+1])+abs(b[i]-a[i+1]);
            if(s1<s2){
                continue;
            }
            else{
                swap(a[i+1], b[i+1]);
            }
        }

        for(ll i=0;i<n-1;i++){
            sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
        }

        cout<<sum<<'\n';
    }
}