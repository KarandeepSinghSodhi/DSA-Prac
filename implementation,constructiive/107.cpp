#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;
    int toasts_by_drink = total_drink / (n * nl);
    int toasts_by_slices = total_slices / n;
    int toasts_by_salt = p / (n * np);

    int max_toasts_per_friend = min({toasts_by_drink, toasts_by_slices, toasts_by_salt});
    
    cout << max_toasts_per_friend << endl;

    return 0;
}
