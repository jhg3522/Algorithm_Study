#include<iostream>
using namespace std;

int main() {
	
	int a,b,i,res ,max=-2147000000;
	int c[10] = {0,};
	cin >> a;
	while (a > 0) {
		b = a % 10;
		c[b]++;
		a /= 10;
	}
	for (i = 0; i<10; i++) {
		if (c[i] > max) {
			max = c[i];
			res = i;
		}
		else if (c[i] == max) {
			if (i > res) res = i;
		}
	}

	cout << res;
	return 0;
}