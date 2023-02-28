#include <bits/stdc++.h>
using namespace std;

/*You are given a binary string of length n consisting of '0' and '1'.
A binary string is good if total number consecutive ones wherever present are equal.
You are allowed to perform two types of operations

You can choose any index i and insert '1' at that position . After this, length of string will increase by 1.
Choose any index i such that Si = '1' and remove Si. After this, length of string will decrease by 1.
Your task is to make given string good using minimum number of operations.
*/
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int i=0;
    vector<int> arr;
    while(i<n){
        if(s[i]=='1'){
            int j=i;
            while(j<n && s[j]=='1'){
                j++;
            }
            arr.push_back(j-i);
            i=j;
        }
        else{
            i++;
        }
        
    }
    sort(arr.begin(),arr.end());
    //find median
    int median=arr[arr.size()/2];
    //find if all elements are equal
    // int flag=1;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]!=median){
    //         flag=0;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<0;
    // }
    // return 0;
    int sum  = 0;
    for(int i=0;i<arr.size();i++){
        sum += abs(median-arr[i]);
    }
    cout<< sum;

}