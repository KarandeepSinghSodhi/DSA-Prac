#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=max(a,b);
        int d=min(a,b);
        int count=0;
        int diff=c-d;
        int ans=0;
        ans+=diff/10;
        if(diff%10!=0){
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}