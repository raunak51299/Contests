#include <iostream>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j) % 2 == 0) {
                matrix[i][j] = count;
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j) % 2 != 0) {
                matrix[i][j] = count;
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t; cin >>t;
    while(t--){
        solve();
    }
    return 0;
}