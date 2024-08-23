#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--) {
        long long a,b,n;
        cin>>a>>b>>n;

        if (a>b) swap(a,b);

        int operations=0;
        while (b<=n) {
            a+=b;
            swap(a,b);
            operations++;
        }

        cout<<operations<<endl;
    }

    return 0;
}
