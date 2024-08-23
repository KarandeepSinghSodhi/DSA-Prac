#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  arr[n+1];
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }


    return 0;
}