#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int n, t;
        cin >> n >> t;
        
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int bestIndex = -1, bestValue = 0;
        for (int i = 0; i < n; i++) {
            int timeRemaining = t - a[i];
            if (t < a[i]) {
                t--;
                continue; 
            }
            if (b[i] > bestValue) {
                bestIndex = i+1;
                bestValue = b[i];
            }
            t--;
        }
        
        cout << bestIndex << endl;
    }
    
    return 0;
}
