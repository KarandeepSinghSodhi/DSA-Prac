#include<bits/stdc++.h>
using namespace std;
bool func(long long r,long long g,long long b,long long w){
    if(r%2 + g%2 + b%2 + w%2 <=1){
        return true;
    }
    if(r>=1 && g>=1 && b>=1){
        if(((r-1)%2+(b-1)%2+(g-1)%2+(w+3)%2)<=1){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,g,b,w;
        cin>>r>>g>>b>>w;
        if(func(r,g,b,w)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}