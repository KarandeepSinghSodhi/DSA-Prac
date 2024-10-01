#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long double n,m,a;
    cin>>n>>m>>a;
    long long int b=ceil(n/a);
    long long int c=ceil(m/a);
    long long int ans=b*c;
    cout<<ans<<endl;
    return 0;;
}