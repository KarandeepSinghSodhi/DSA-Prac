#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int even=0;   //existance of even number
        int odd=0; // existance of odd number
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                odd=1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even=1;
                break;
            }
        }

        if(odd==0){
            cout<<"NO"<<endl;
        }else if(even ==0 && n%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }
    return 0;
}