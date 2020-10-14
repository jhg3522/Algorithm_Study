#include<iostream>
#include<vector>
using namespace std;
int main() {
	int i, j, tmp, idx, res=1,n;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {

		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		idx = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] > a[idx]) idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	for (i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) res++;
		if (res == 3) { cout << a[i + 1]; break; }
	}
	
	return 0;
}