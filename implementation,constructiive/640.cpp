#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        vector<int> results;

        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                count++;
                int digit = s[i] - '0';
                int value = digit;
                for (int j = 0; j < n - i - 1; j++) {
                    value *= 10;
                }
                results.push_back(value);
            }
        }

        cout << count << endl;
        for (int value : results) {
            cout << value<<" " ;
        }
        cout<< endl;
    }
    return 0;
}
