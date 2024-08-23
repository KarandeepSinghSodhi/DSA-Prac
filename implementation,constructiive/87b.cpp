#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int min_seats=0;
    int passengers=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        passengers=passengers-a+b;
        min_seats=max(min_seats,passengers);
    }    
    cout<<min_seats;
    return 0;
}