#include <bits/stdc++.h>
using namespace std;

void func(int &k, string s) {
        if (s == "++X" || s == "X++") {
            k++;
        } else if (s == "--X" || s == "X--") {
            k--;
        }
}
main() {
    int k = 0;
    int n;
    cin >> n; // Read the number of operations

    while (n--) {
        string s;
        cin >> s; // Read each operation
        func(k, s); // Call the function to update k
    }

    cout << k << endl; // Print the final value of k

    return 0;
}
