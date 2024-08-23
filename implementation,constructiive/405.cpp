#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int years=0;
    while(b>=a){
        years++;
        a*=3;
        b*=2;
    }    
    cout<<years;
    return 0;
}