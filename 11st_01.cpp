#include<iostream>
#include<algorithm>
using namespace std;

int solution(string &s) {
	int res,a = 0, other = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') { //a�� ����
			a++;
		}
		else {
			other++; //a �̿��� ����
			a = 0; //a�� ���� �ʱ�ȭ
		}
		if (a == 3) {//a�� ���� 3�������� -1
			return -1;
		}
	}
	int all_a, ok;
	ok = 2 * (other + 1); //a�� ������ ���� * aa�̹Ƿ� 2
	all_a = (s.length() - other); // �� a ����
	res = ok - all_a;
	return res;
}

int main() {
	string s = "dog";
	cout << solution(s) << endl;

	return 0;
}