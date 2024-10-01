#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int mini=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i-1]-arr[i];
        mini=min(sum,mini);
    }
    cout<<abs(mini)<<endl;
    return 0;
}