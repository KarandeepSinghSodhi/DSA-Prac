#include<iostream>
#include<cmath>
using namespace std;

int func(long long n, long long k) {
   if (n > k) {
			k = ((n + k - 1) / k) * k;
		}
		return (k + n - 1) / n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << func(n, k) << endl;
    }
    return 0;
}
