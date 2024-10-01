#include<iostream>
using namespace std;

bool canTransform(int x, int y) {
    if (x >= y) {
        return true;
    }
    
    if (x == 2 && y > 3) {
        return false;
    }

    while (x < y) {
        if (x % 2 == 0) {
            x = (x / 2) * 3;
        } else {
            x--;
        }
        
        if (x >= y) {
            return true;
        }
        if(x==2 && y>3){
            return false;
        }
        if(x<2 && y>=2){
            return false;
        }
    }
    
    return x >= y;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        if (canTransform(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
