#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, donuts, c;

        cin >> a >> donuts >> c;

        int p1 = -1, p2 = -1;

        if (c / donuts < a)
        {
            p1 = (a >= c ? -1 : 1);
            p2 = donuts;
        }
        else
        {
            p1 = 1;
            p2 = -1;
        }

        cout << p1 << " " << p2;

        cout << endl;
    }
    return 0;
}