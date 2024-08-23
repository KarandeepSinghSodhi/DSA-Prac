#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int digits=0;
        if(s[0]-'0'==1){
            cout<<n*(n+1)/2<<endl;
        }else{
            digits+=n*(n+1)/2;
            digits+=10*(s[0]-'0'-1);
            cout<<digits<<endl;
        }

    }    
    return 0;
}