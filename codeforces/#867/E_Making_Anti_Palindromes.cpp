#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n/2; i++) {
            if (s[i] == s[n-i-1]) {
                cnt++;
            }
        }
        if (cnt == n/2 && n%2==1) {
            cout << "1\n"; // case when n is odd and string is already anti-palindrome
        } else {
            cout << abs(n/2-cnt) << "\n";
        }
    }
    return 0;
}
