#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n<1){
        cout<<0<<endl;
        return 1;
    }
    long long int ans=(1LL<<(n+1))-2;
    cout<<ans<<endl;
    
    return 0;
}
