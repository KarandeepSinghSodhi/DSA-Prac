#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=1;
    int maxsize=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            s++;
            maxsize=max(maxsize,s);
        }else{
            s=1;
        }
    }
    cout<<maxsize;

    return 0;
}