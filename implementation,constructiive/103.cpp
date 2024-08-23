#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int mini = a[0];
    int min_index = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= mini){
            mini = a[i];
            min_index = i;
        } 
    }

    int maxi = a[n - 1];
    int max_index = n - 1;
    for(int i = n - 1; i >= 0; i--){
        if(a[i] >= maxi){
            maxi = a[i];
            max_index = i;
        }
    }

    if(min_index < max_index){
        cout << max_index + (n - 1 - min_index) - 1;
    }else{
        cout << max_index + (n - 1 - min_index);
    }
    return 0;
}
