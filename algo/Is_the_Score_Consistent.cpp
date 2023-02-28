#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(c>=a&&d>=b){
            cout<<"POSSIBLE"<<endl;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}