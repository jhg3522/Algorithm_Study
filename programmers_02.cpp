#include <string>
#include<iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0,i;
	vector<int> ans;
	for (i = 0; i < n; i++) {
		ans.push_back(1);
	}
	for (i = 0; i < lost.size(); i++) {
		ans[lost[i]-1]--;
	}
	for (i = 0; i < reserve.size(); i++) {
		ans[reserve[i] - 1]++;
	}
	for (i = 0; i < n; i++) {
		if (ans[i] == 0) {
			if (i == 0) {
				if (ans[i + 1] > 1) {
					ans[i]++;
					ans[i+1]--;
				}
			}
			else if (i == n - 1) {
				if (ans[i - 1] > 1) {
					ans[i]++;
					ans[i - 1]--;
				}
			}
			else {
				if (ans[i - 1] > 1) {
					ans[i]++;
					ans[i - 1]--;
				}
				else if (ans[i + 1] > 1) {
					ans[i]++;
					ans[i + 1]--;
				}
				else {
					continue;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (ans[i] > 0) answer++;
	}
	return answer;
}

int main() {
	int n = 3;
	vector<int> lost = { 3 };
	vector<int> reserve = { 1};
	int answer = solution(n, lost, reserve);
	cout << answer << endl;
	return 0;
}