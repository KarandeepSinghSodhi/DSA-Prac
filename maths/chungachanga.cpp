#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, y, z;
    cin >> x >> y >> z;
 
    long long ans1 = (x + y) / z;
    long long ans2 = 0;
 
    if((x + y) / z > x / z + y / z)
        ans2 = min((x / z + 1) * z - x, (y / z + 1) * z - y);
 
    cout << ans1 << " " << ans2 << "\n";
    return 0;
}