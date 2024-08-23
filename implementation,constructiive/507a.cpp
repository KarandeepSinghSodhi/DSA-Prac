#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    
    sort(arr.begin(), arr.end());
    
    vector<int> ans;
    int instruments_learned = 0;
    
    for (int i = 0; i < n; i++) {
        if (k - arr[i].first < 0) {
            break;
        }
        ans.push_back(arr[i].second);
        k -= arr[i].first;
        instruments_learned++;
    }

    cout << instruments_learned << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
