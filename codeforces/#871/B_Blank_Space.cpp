#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxBlank = 0;
        int currentBlank = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                currentBlank++;
            } else {
                maxBlank = max(maxBlank, currentBlank);
                currentBlank = 0;
            }
        }
        maxBlank = max(maxBlank, currentBlank);
        cout << maxBlank << endl;
    }
    return 0;
}