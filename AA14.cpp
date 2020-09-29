#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
	int cnt = 0;
	sort(A.begin(), A.end()); //�������� ����
	while (A[0] != 1) { // ó�� ���� 1�϶� ���� -1
		A[0]--;
		cnt++;
	}
	for (int i = 0; i < A.size()-1; i++) {
		if (A[i] == A[i + 1]) { //���� ���̰� 1�� �ƴҰ�� -1
			A[i + 1]++;
			cnt++;
		}
		else if (A[i + 1] - A[i] != 1) { //���� ��� �ڿ��� +1
			A[i + 1]--;
			cnt++;
		}
	}
	if (A[A.size() - 2] == A[A.size() - 1]) { //������ ���
		A[A.size() - 1]++;
		cnt++;
	}
	return cnt;
}

int main() {
	vector<int> A = { 6,2,3,5,6,3 };
	cout << solution(A) << endl;

	return 0;
}