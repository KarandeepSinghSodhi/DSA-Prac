#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f_one=-1;
        int l_one=-1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                l_one=i;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                f_one=i;
            }
        }
        int zerocount=0;
        if(l_one==f_one){
            cout<< 0<<endl;
        }

        else{
            for(int i=f_one;i<=l_one;i++){
                if(s[i]=='0'){
                    zerocount++;
                }
            }
            cout<<zerocount<<endl;
        }
    }
    return 0;
}