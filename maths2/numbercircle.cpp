#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    // Check if the largest element is smaller than the sum of the rest
    if (a[n-1] >= a[n-2] + a[n-3]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        
        // Swap the last two elements
        swap(a[n-1], a[n-2]);
        
        // Output the arranged circle
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
