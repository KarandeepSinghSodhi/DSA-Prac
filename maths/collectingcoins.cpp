#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int max_coins = max({a, b, c});
        int min_coins_needed = (max_coins - a) + (max_coins - b) + (max_coins - c);

        if (n >= min_coins_needed && (n - min_coins_needed) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
