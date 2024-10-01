#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int w, h;
        cin >> w >> h;
        vector<int> temp(4);

        for (int i = 0; i < 2; i++) {
            int k;
            cin >> k;
            vector<int> a(k);
            for (int j = 0; j < k; j++) {
                cin >> a[j];
            }
            temp[i] = a[k - 1] - a[0];
        }

        for (int i = 2; i < 4; i++) {
            int k;
            cin >> k;
            vector<int> a(k);
            for (int j = 0; j < k; j++) {
                cin >> a[j];
            }
            temp[i] = a[k - 1] - a[0];
        }

        long long int prod = max(temp[0] * h, temp[1] * h);
        prod = max(prod, max(temp[2] * w, temp[3] * w));

        cout << prod << endl;
    }
    return 0;
}
