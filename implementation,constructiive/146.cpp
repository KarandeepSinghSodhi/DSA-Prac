#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int d=mp.size();
    if(d%2==0){
        cout<<"CHAT WITH HER!" ;
    }else{
        cout<< "IGNORE HIM!";
    }
    return 0;
}