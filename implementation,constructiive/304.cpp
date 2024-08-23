#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=(w*(w+1))/2;
    if(sum*k-n>0){
        cout<<sum*k-n;
    }else{
        cout<<0;
    }
    return 0;
}