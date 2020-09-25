#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int digit_sum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main() {
	int n,a,sum,max=-2147000000,res;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a;
		sum = digit_sum(a);
		if (sum > max) {
			max = sum;
			res = a;
		}
		else if (sum == max) {
			if (res < a) {
				res = a;
			}
		}
	}
	cout << res;
}