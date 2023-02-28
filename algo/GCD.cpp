#include <bits/stdc++.h>

using namespace std;
int gcd_euclid(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd_euclid(b, a%b);
    }
}
int main() {
    cout<<gcd_euclid(26,39);
    
}