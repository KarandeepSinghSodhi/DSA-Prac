#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(3,0);
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[0]+=x;
        arr[1]+=y;
        arr[2]+=z;
    }
    for(int i=0;i<3;i++){
        if(arr[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}