#include<iostream>
using namespace std;

int main(){
	int n, m, val, i, cnt = 0, max = -2147000000 ;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> val;
		if (val > m) {
			cnt++;
			if (cnt > max) max = cnt;
		}
		else {
			cnt = 0;
		}
	}
	cout << max;

	return 0;
}