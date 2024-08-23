#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> count(k + 1, 0);  
    for (int i = 0; i < n; i++) {
        int drink;
        cin >> drink;
        count[drink]++;
    }
    
    int max_students = 0;
    int leftover = 0;
    
    for (int j = 1; j <= k; j++) {
        max_students += (count[j] / 2) * 2;  
        leftover += count[j] % 2;            
    }
    
    max_students += min(leftover, (n + 1) / 2 - max_students / 2);
    
    cout << max_students << endl;
    
    return 0;
}
