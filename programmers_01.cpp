//���ڿ��� ������ ����Ʈ strings��, ���� n�� �־����� ��, �� ���ڿ��� �ε��� n��° ���ڸ� �������� �������� �����Ϸ� �մϴ�.���� ��� strings��[sun, bed, car]�̰� n�� 1�̸� �� �ܾ��� �ε��� 1�� ���� u, e, a�� strings�� �����մϴ�.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int k;
bool cmp(string a, string b) {
	if (a[k] != b[k]) return a[k] < b[k];
	else return a<b;
}
vector<string> solution(vector<string> strings, int n) {
	k = n;
	sort(strings.begin(), strings.end(), cmp);
	return strings;
}

int main() {
	int n = 1;
	vector<string> strings = { "sun","bed","car" };
	vector<string> ans =solution(strings, n);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}