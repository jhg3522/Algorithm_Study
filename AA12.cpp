#include<iostream>
using namespace std;

int main() {

	int n, sum = 0, c = 1, d =9, res = 0;
	cin >> n;
	while (sum + d < n) {
		res += d * c;
		sum += d;
		c++;
		d *= 10;
	}
	res += (n - sum)*c;
	cout << res;
	return 0;
}
/*
1~9 -> 1 9개 
10~99 -> 2 90개
100 ~999 -> 3 900개
1000~9999 -> 4 9000개
*/