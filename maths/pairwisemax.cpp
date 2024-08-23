#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int arr[3] = {x, y, z};
        sort(arr, arr + 3);

        if (arr[1] == arr[2]) {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
