#include <bits/stdc++.h>
using namespace std;
// k^3+3k^2+2k-6n=0 am solving this
int main() {
    int n;
    cin >> n;
    int k = floor(pow(6.0 * n, 1.0 / 3.0));
    while ((k * (k + 1) * (k + 2)) / 6 > n) {
        k--;
    }
    while ((k + 1) * (k + 2) * (k + 3) / 6 <= n) {
        k++;
    }
    
    cout << k << endl;
    return 0;
}
