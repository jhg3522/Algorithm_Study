#include<iostream>
#include<vector>
#include<string>
using namespace std;
//�ƽ�Ű�ڵ� 32�� ���ؼ� �빮�ڸ� �ҹ���ȭ�Ѵ�..
int main() {
	string s;
	vector<char> a;
	getline(cin, s);
	for (int i =0; i < s.size(); i++) {
		if (s[i] != ' ')
			a.push_back(s[i]);
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < 97) {
			cout << (char)(a[i] + 32);
		}
		else
			cout << a[i];
	}

}