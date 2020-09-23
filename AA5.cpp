#include<iostream>
#include<string>
using namespace std;

int main() {
	string id;
	int year = 2019;
	int a = 1900;
	int b = 2000;
	cin >> id;
	// id[0~1] 년생
	// id[7] -> 성별 1,3 남 2,4 여
	cout << id[7];
	if ((int)id[7] == 49) {
		a += id[0] * 10 + id[1];
		cout << (year + 1) - a << " M" << endl;
	}
	if ((int)id[7] == 50) {
		a += id[0] * 10 + id[1];
		cout << (year + 1) - a << " W" << endl;
	}
	if ((int)id[7] == 51) {
		b += id[0] * 10 + id[1];
		cout << year - b << " M" << endl;
	}
	if ((int)id[7] == 52) {
		b += id[0] * 10 + id[1];
		cout << year -b << " W" << endl;
	}
}