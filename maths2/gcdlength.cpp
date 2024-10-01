#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,i;
        cin>>a>>b>>c;
        if(a>b)
		{
			for(i=0;i<a;i++)
			{
				if(i==0||i==a-c)cout<<'1';
				else cout<<'0';
			}
			cout<<' ';
			for(i=0;i<b;i++)
			{
				if(i==0)cout<<'1';
				else cout<<'0';
			}
		}
		else
		{
			for(i=0;i<a;i++)
			{
				if(i==0)cout<<'1';
				else cout<<'0';
			}
			cout<<' ';
			for(i=0;i<b;i++)
			{
				if(i==0||i==b-c)cout<<'1';
				else cout<<'0';
			}
		}
		cout<<'\n';
	}
	return 0;
}