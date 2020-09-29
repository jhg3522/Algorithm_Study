#include<iostream>
#include<algorithm>
using namespace std;

int solution(string &s) {
	int res,a = 0, other = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') { //a의 개수
			a++;
		}
		else {
			other++; //a 이외의 개수
			a = 0; //a의 개수 초기화
		}
		if (a == 3) {//a가 연속 3개나오면 -1
			return -1;
		}
	}
	int all_a, ok;
	ok = 2 * (other + 1); //a가 가능한 공간 * aa이므로 2
	all_a = (s.length() - other); // 총 a 개수
	res = ok - all_a;
	return res;
}

int main() {
	string s = "dog";
	cout << solution(s) << endl;

	return 0;
}