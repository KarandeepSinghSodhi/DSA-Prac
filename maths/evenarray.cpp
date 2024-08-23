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
        int e=0,o=0;
        for(int i=0;i<n;i++){
            if(i%2==0&& arr[i]%2!=0){
                o++;
            }else if(i%2!=0 && arr[i]%2==0){
                e++;
            }

        }
        if(e!=o){
            cout<<-1<<endl;

        }else{
            cout<<e<<endl;
        }
    }

    return 0;
}