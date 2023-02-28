#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<< int(ceil(abs(b-a)/10.0)) << endl;
        
    }
    return 0;
}