#include <bits/stdc++.h>
using namespace std;

// int sumf(int n) {
//     int sum1 = 0;
//     while (n != 0) {
//         sum1 += n % 10;
//         n /= 10;
//     }
//     return sum1;
// }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n=t;
        // cin >> n;
        if(n%10!=9){
            cout<<n/2 << " "<<n-n/2<<endl;
            continue;
        }
        int m=n/10;
        if((m%10)%2!=0){
            cout<<n/2-4<<" "<<n-n/2+4<<endl;
        }else{
            cout<<n/2 << " "<<n-n/2<<endl;
        }
        
    }

    return 0;
}
