#include <iostream>
using namespace std;

string func(string s, int n) {
    bool all_upper = true;
    bool all_upper_except_first = (s[0] >= 'a' && s[0] <= 'z');

    for (int i = 0; i < n; ++i) {
        if (s[i] < 'A' || s[i] > 'Z') {
            all_upper = false;
        }
    }

    for (int i = 1; i < n; ++i) {
        if (s[i] < 'A' || s[i] > 'Z') {
            all_upper_except_first = false;
        }
    }

    if (all_upper || all_upper_except_first) {
        for (int i = 0; i < n; ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A');
            } else {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    cout << func(s, n) << endl;
    return 0;
}
