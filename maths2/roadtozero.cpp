#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        long long int a,b;
        cin>>a>>b;
        if(a*2<=b){
            cout<<(x+y)*a<<endl;
        }else{
            cout<<min(x,y)*b+(max(x,y)-min(x,y))*a<<endl;
        }
    }
    return 0;
}