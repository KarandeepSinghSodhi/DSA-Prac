#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=arr[n-1];
    long long int total=maxi;
    int t;
    for(int i=n-2;i>=0;i--){
        t=min(maxi-1,arr[i]);
        if(t<0) t=0;
        total+=t;
        maxi=t;
    }
    cout<<total;
    return 0;
}