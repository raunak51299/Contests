#include <bits/stdc++.h>

using namespace std;
int exp(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return exp(x*x, n/2);
    }
    else{
        return x*exp(x*x,(n-1)/2);
    }
}
int expIterative(int x, int n){
    int result =1;
    while(x>0){
        if(n%2==1){
            result*=x;
        }
        n/=2;
        x*=x;
    }
    return result;
}
int main() {
    cout<<expIterative(3,2);
    
}