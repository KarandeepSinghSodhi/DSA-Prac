#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n*2];
        for(int i=0;i<n*2;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n+n);
        cout<<arr[n]-arr[n-1]<<endl;
    }
    return 0;
}