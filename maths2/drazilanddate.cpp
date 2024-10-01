#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    long long int s;
    cin>>s;
    a=abs(a);
    b=abs(b);
    if(a+b>s){
        cout<<"NO"<<endl ;
    }else if((a+b-s)%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}