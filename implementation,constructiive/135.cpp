#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(char c:s){
        mp[c]++;
    }
    string ans="";
    for(auto it:mp){
        if(it.second % n != 0){
            cout<<-1;
            return 0;
        }else{
            for(int i=0;i<it.second/n;i++){
                ans.push_back(it.first);
            }
        }
    }
    string a="";
    for(int i=0;i<n;i++){
        a+=ans;
    }
    cout<<a;
    return 0;
}