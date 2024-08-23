#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int temp=k%10;
    int i;
    for( i=1;i<=10;i++){
        if((temp*i)%10==r || (temp*i)%10==0){
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}