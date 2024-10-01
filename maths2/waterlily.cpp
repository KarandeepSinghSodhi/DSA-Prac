#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    long double H,L;
    cin>>H>>L;
    long double ans=(-H*H+L*L)/(2*H);
    cout<<setprecision(10)<<ans;
    
    return 0;
}