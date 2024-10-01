#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%9!=0){
            cout<<"NO"<<endl;
        }else{
            int t=a+b+c;
            if(min(min(a,b),c)<t/9){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }

    }
    return 0;
}