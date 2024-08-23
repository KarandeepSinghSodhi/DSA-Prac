#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int max1 = 0, max2 = 0;

    // Find the largest and second largest values in a single pass
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        if (ai > max1) {
            max2 = max1;
            max1 = ai;
        } else if (ai > max2) {
            max2 = ai;
        }
    }

    // Calculate the number of full sequences and the remaining emotes
    int sequence_count = m / (k + 1);
    int remaining = m % (k + 1);

    // Calculate the total happiness
    long long total_happiness = (long long)sequence_count * (k * (long long)max1 + max2) + (long long)remaining * max1;

    cout << total_happiness << endl;
    return 0;
}
