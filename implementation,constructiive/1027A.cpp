#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        
        bool can_be_palindrome = true;
        for (int i = 0; i < n / 2; ++i) {
            int diff = abs(s[i] - s[n - i - 1]);
            if (diff != 0 && diff != 2 && diff != 24) {
                can_be_palindrome = false;
                break;
            }
        }
        
        if (can_be_palindrome) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
