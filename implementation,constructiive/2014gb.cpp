#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int curr=1;
    bool ans=0;
    while(curr<t){
        if(curr==t) ans=true;
        curr+=arr[curr];
        if(curr==t){
            ans=true;
        }
    }
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}