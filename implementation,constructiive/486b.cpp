#include<bits/stdc++.h>
using namespace std;
int a[110][110],b[110][110];
 
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			a[i][j] = 1;
			cin>>b[i][j];
		}
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(b[i][j]==1)continue;
			for(int k=0; k<n; k++)
				a[i][k] = 0;
			for(int k=0; k<m; k++)
				a[k][j] = 0;
		}
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			int x=0;
			for(int k=0; k<m; k++)
				x |= a[k][j];
			for(int k=0; k<n; k++)
				x |= a[i][k];
			if(x != b[i][j])
			{
				cout<<"NO\n";
				return 0;
			}
		}
	cout<<"YES\n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}