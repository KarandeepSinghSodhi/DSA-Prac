#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long sum = 0;

        while (true) {
            long long currentSum = accumulate(a.begin(), a.end(), 0LL);
            sum += currentSum;

            unordered_map<int, int> freq;
            int maxMAD = 0;

            for (int i = 0; i < n; ++i) {
                freq[a[i]]++;
                if (freq[a[i]] >= 2) {
                    maxMAD = max(maxMAD, a[i]);
                }
            }

            bool allZero = true;
            for (int i = 0; i < n; ++i) {
                if (freq[a[i]] >= 2) {
                    a[i] = maxMAD;
                } else {
                    a[i] = 0;
                }
                if (a[i] != 0) {
                    allZero = false;
                }
            }

            if (allZero) break;
        }

        cout << sum << "\n";
    }

    return 0;
}
