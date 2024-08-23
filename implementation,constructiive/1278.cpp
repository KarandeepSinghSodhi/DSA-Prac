#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i;
        string s1, s2, s3;
        int cnt = 0, sum = 0;
        bool ans = false;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        for (i =0 ; i + s1.length() <= s2.length(); i++) {
            s3 = s2.substr(i, s1.length());
            sort(s3.begin(), s3.end());
            if (s1 == s3) {
                ans = true;
                break;
            }
        }
        if (!ans) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}