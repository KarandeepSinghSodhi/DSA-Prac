#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 105

int n;
char a[N];

signed main() {
    scanf("%s", a + 1);
    n = strlen(a + 1);

    if (n & 1) {
        for (int i = 2; i <= n; i++) {
            if (a[i] == '1') {
                return printf("%lld\n", n / 2 + 1), 0;
            }
        }
        printf("%lld\n", n / 2);
    } else {
        printf("%lld\n", n / 2);
    }
    
    return 0;
}
