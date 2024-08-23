#include <bits/stdc++.h>
using namespace std;

int func(int n, int m) {
    if (n == 0 || m == 0) return -1;
    if (m % n != 0) return -1;

    int k = m / n;
    int count = 0;
    
    while (k != 1) {
        if (k % 2 == 0) {
            k /= 2;
            count++;
        } else if (k % 3 == 0) {
            k /= 3;
            count++;
        } else {
            return -1;
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << func(n, m);
    return 0;
}
