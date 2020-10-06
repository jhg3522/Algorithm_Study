//문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다.예를 들어 strings가[sun, bed, car]이고 n이 1이면 각 단어의 인덱스 1의 문자 u, e, a로 strings를 정렬합니다.
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