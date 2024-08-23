#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    string countStr = to_string(count);
    bool isLuckyCount = true;

    for (char c : countStr) {
        if (c != '4' && c != '7') {
            isLuckyCount = false;
            break;
        }
    }
    if (isLuckyCount) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
