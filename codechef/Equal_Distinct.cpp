#include <bits/stdc++.h>
using namespace std;
void solve(){
    unordered_set<int> s;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    if(s.size()%2==0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        if(n%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
