#include <iostream>
#include <cmath>

using namespace std;

void minimal_moves(int n, int m) {
    int k = (n + 1) / 2; 
    while (k <= n) {
        if (k % m == 0) {
            cout << k << endl;
            return;
        }
        k++;
    }
    cout << -1 << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    minimal_moves(n, m);
    return 0;
}
