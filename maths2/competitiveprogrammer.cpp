#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int zero=0;
        int sum=0;
        bool even=false;
        for(char ch:s){
            if(ch=='0'){
                zero++;
            }
            if(ch!='0' && ((ch-'0')%2==0)){
                even=true;
            }
            sum+=(ch-'0');
        }
        if((sum%3==0 && zero>1) ||( sum %3==0 && zero>=1 && even==true)){
            cout<<"red";
        }else{
            cout<<"cyan";
        }
        cout<<endl;
     }
    return 0;
}