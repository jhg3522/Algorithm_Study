#include<iostream>
using namespace std;
int main() {
	int N,M;
	int max = -2147000000, min = 2147000000;
	cin >> N;
	while (N--) {
		cin >> M;
		if (M > max)  max = M; 
		if (M < min)  min = M; 
	}
	cout << max - min << endl;

}
