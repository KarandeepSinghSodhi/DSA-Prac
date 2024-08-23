#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=false;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            cout<< a/2<<endl;
        }
        else if(a%2!=0 && !flag){
            int b=floor(double(a)/2);
            flag=!flag;
            cout<<b<<endl;
        }else{
            int b=ceil(double(a)/2);
            flag=!flag;
            cout<<b<<endl;
        }
    
    }
    return 0;
}