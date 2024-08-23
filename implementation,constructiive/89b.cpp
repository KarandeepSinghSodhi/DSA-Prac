#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // To handle input strings with spaces
    string ans = "";
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U','y','Y'};

    for (char c : s) {
        if (vowels.find(c) == vowels.end()) {
            ans.push_back('.');
            ans.push_back(tolower(c));
        }
    }

    cout << ans << endl;
    return 0;
}
