#include <bits/stdc++.h>
using namespace std;
void solve(unordered_set<int> s){
    int n;
    cin>>n;
    vector<vector<int>>mat;
    while(n--){
        int y;
        cin >> y;
        vector<int>temp;
        for(int i = 0; i < y; i++)
        {
            int xyz;
            cin >> xyz;
            temp.push_back(xyz);
        }
        mat.push_back(temp);
    }
    bool flag = false; 
    for(int i = 0; i < mat.size() - 1; i++){
        for(int j = i+1; j < mat.size(); j++){
            unordered_set<int> uni;
            
            for(int k = 0; k < mat[i].size(); k++){
                uni.insert(mat[i][k]);
            }
            for(int l = 0; l< mat[j].size(); l++){
                uni.insert(mat[j][l]);
            }
            if(s == uni){
                cout << "YES"<< endl;
                return;
            }
        }
    }
    cout<< "NO" << endl;
}
int main() {
	int t;
	cin>>t;
	unordered_set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	while(t--){
        solve(s);
    }

	return 0;
}
