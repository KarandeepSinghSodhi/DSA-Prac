#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m, '.'));

    bool dir = 1;  //1-right, 0-left
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { 
            for (int j = 0; j < m; ++j) {
                arr[i][j] = '#';
            }
        } else { 
            if (dir == 1) {
                arr[i][m-1] = '#'; 
            } else {
                arr[i][0] = '#'; 
            }
            dir = !dir;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
