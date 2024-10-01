#include<bits/stdc++.h>
using namespace std;

long long int func(long long int a,long long int k){
        k--;
        while(k>0) {
            long long int m = a;
            int x = 10;
            int y = 0;
            while(m>0) {
                int d = m % 10;
                m/=10;
                x = min(x,d);
                y = max(y,d);
            }
            if(x==0) break;
            a += x*y;
            k--;
        }
        return a;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,k;
        cin>>a>>k;
        cout<<func(a,k)<<endl;

    }
    return 0;
}