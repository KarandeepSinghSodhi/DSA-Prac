#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a=s;
    reverse(s.begin(),s.end());

    cout<<a+s;

    return 0;
}