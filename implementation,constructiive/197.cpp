#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<char> arr;
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            arr.push_back(s[i]);
        }
    }
    sort(arr.begin(),arr.end());
    cout<<arr[0];
    for(int i=1;i<arr.size();i++){
        cout<<'+'<<arr[i];
    }
    return 0;
}