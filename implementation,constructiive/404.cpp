#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="Icosahedron"){
            sum+=20;
        }else if(s=="Cube"){
            sum+=6;
        }else if(s=="Tetrahedron"){
            sum+=4;
        }else if(s=="Octahedron"){
            sum+=8;
        }
        else{
            sum+=12;
        }
    }
    cout<<sum;
    return 0;
}