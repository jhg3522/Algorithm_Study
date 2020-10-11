#include<iostream>
#include<vector>
using namespace std;

int main(){
	int i,n,max=0,res=0;
	cin >> n;
	vector <int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n-1; i++) {
		if (a[i] <= a[i + 1]) res++;
		else res = 0;
		if (res > max) max = res;
	}
	cout << max+1;
	return 0;
}