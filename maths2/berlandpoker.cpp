#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n , m , k;
		cin >> n >> m >> k;
		int took = n / k;
		if (m <= took)
		{
			cout << m <<'\n';
		}
		else
		{
			m -= took;
			int non = m / (k - 1);
			if (m % (k-1) != 0)
			{
				non++;
			}
			cout <<took - non<<'\n';
		}
	}
}