#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
	int n;
	cin>>n;
	cin>>s;
	int cnt1=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			ans=max(ans,2*max(i+1,n-i));
		}
	}  
	ans=max(ans,n);
	cout<<ans<<endl;
    }
    return 0;
}