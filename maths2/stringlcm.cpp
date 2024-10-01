#include<bits/stdc++.h>
using namespace std;

// Using the built-in gcd function for efficiency
int hcf(int a, int b) {
    return __gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.size();
        int n2 = s2.size();
        
        // Find the greatest common divisor (GCD) of lengths
        int h = hcf(n1, n2);
        int l = (n1 * n2) / h; // Least common multiple (LCM) of lengths

        // Repeat strings to form s3 and s4
        string s3 = "", s4 = "";
        for (int i = 0; i < (l / n1); i++) s3 += s1;
        for (int i = 0; i < (l / n2); i++) s4 += s2;

        // Compare the repeated strings
        if (s3 == s4) {
            cout << s3 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
