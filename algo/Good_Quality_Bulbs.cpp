#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--){
        int a, b, input, i=0, sum=0;
        vector<int> arr;
        cin>>a>>b;
        for(int i = 0; i<a-1; i++){
            cin>>input;
            arr.push_back(input);
        }
        sum = ceil(b*a - (accumulate(arr.begin(), arr.end(), 0)));
        if(sum<0){
            cout<<"0"<<endl;
        }
        else{
            cout<< sum << endl;
        }
    }
}