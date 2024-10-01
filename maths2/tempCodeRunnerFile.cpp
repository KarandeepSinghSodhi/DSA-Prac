#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(a==b){
        return a;
    }
    if(a>b){
        return hcf(a-b,b);
    }else{
        return hcf(a,b-a);
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int n1=s1.size();
        int n2=s2.size();
        int h=hcf(n1,n2);
        int l=(n1*n2)/h;
        string s3=((l/n1),s1);
        string s4=((l/n2),s2);
        if(s3==s4){
            cout<<s3;
        }else{
            cout<<-1;
        }
        
    }
    return 0;
}