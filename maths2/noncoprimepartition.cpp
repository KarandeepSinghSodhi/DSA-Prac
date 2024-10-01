#include<iostream>
using namespace std;
int main(){
    int n;
	cin >> n;
	if(n<=2) {
		cout << "No";
	} else {
		cout << "Yes\n";
		if(n&1) {
			cout << "1 " << n << "\n" << n-1;
			for(int i=1; i<n; ++i)
				cout << " " << i;
		} else {
			cout << "2 1 " << n << "\n" << n-2;
			for(int i=2; i<n; ++i)
				cout << " " << i;
		}
	}
    return 0;
}