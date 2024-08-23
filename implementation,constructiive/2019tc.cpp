#include <bits/stdc++.h>
using namespace std;

int main(){
    bool ans=false;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==1){
            ans=true;
        } 
    }
    if(ans){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}