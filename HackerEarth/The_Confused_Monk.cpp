#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main() {
	int num;
	cin >> num;
    int a[num];    //Reading input from STDIN
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int g;
    g = gcd(a[0],a[1]);
    for(int i=2;i<num;i+=1){
        g = gcd(g,a[i]);
    }
    cout<<g;
}
   