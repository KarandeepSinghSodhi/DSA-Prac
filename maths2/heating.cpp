#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int c;   //no. of radiators
        int sum;  // no. of sections
        cin>>c>>sum;
        int m = sum / c;
        printf("%d\n", m * m * (c - sum % c) + (m + 1) * (m + 1) * (sum % c));
    }
    


    return 0;
}