#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;

    int n = x.length();
    for (int i = 0; i < n; ++i) {
        int digit = x[i] - '0';
        int inverted_digit = 9 - digit; 
        if (inverted_digit < digit && !(i == 0 && inverted_digit == 0)) {
            x[i] = inverted_digit + '0'; 
        }
    }

    cout << x;
    return 0;
}
