#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=(((s1[0]-'0')*10+(s1[1]-'0'))*60+(s1[3]-'0')*10+(s1[4]-'0'));
    int n2=(((s2[0]-'0')*10+(s2[1]-'0'))*60+(s2[3]-'0')*10+(s2[4]-'0'));
    int ans=(n1+n2)/2;
    if(ans/60<10) cout<<0;
    cout<<ans/60<<":";
    if(ans%60<10) cout<<0;
    cout<<ans%60;
    return 0;
}