#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
	int cnt = 0;
	sort(A.begin(), A.end()); //오름차순 정렬
	while (A[0] != 1) { // 처음 숫자 1일때 까지 -1
		A[0]--;
		cnt++;
	}
	for (int i = 0; i < A.size()-1; i++) {
		if (A[i] == A[i + 1]) { //숫자 차이가 1이 아닐경우 -1
			A[i + 1]++;
			cnt++;
		}
		else if (A[i + 1] - A[i] != 1) { //같은 경우 뒤에꺼 +1
			A[i + 1]--;
			cnt++;
		}
	}
	if (A[A.size() - 2] == A[A.size() - 1]) { //마지막 경우
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