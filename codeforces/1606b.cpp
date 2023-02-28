#include <bits/stdc++.h>
using namespace std;
/**/
int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        int i=1, total =0, count=0;
        while(i<=b)
        {
            if(total<=a){
                total=total+i;
                count+=1;
            }
            else{
                break;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;

}