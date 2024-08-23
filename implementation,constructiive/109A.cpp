#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num_sevens = n / 7;
    while (num_sevens >= 0) {
        int remaining = n - num_sevens * 7;
        if (remaining % 4 == 0) {
            int num_fours = remaining / 4;
            cout << string(num_fours, '4') + string(num_sevens, '7') << endl;
            return 0;
        }
        num_sevens--;
    }
    cout << -1 << endl;
    return 0;
}
