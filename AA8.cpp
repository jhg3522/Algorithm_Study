#include<iostream>
#include<vector>
#include<string>
using namespace std;
//�ƽ�Ű�ڵ� 32�� ���ؼ� �빮�ڸ� �ҹ���ȭ�Ѵ�..
int main() {
	string s;
	int l = 0, r = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			l++;
		else
			r++;
	}
	if (l == r) {
		if (s[0] != ')' && s[s.size() - 1] != '(')
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "NO";
}