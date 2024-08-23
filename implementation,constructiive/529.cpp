#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int curr=0;
    int i=1;
    string ans="";
    while(curr<n){
        ans.push_back(s[curr]);
        curr+=i;
        i++;
    }
    cout<<ans;
    return 0;
}