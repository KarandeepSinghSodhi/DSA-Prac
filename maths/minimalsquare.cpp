#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k=min(a,b);
        int l=max(a,b);
        if(2*k>=l){
            cout<<(4*k*k)<<endl;
        }else{
            cout<<(l*l)<<endl;
        }
    }
    return 0;
}