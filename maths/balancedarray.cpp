#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 4 != 0){
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        vector<int> a;
        
        // First n/2 even numbers
        for(int i = 1; i <= n / 2; i++) {
            a.push_back(2 * i);
        }
        
        // First n/2 - 1 odd numbers
        for(int i = 1; i < n / 2; i++) {
            a.push_back(2 * i - 1);
        }
        
        // The last odd number to balance the sums
        a.push_back(3 * n / 2 - 1);
        
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
