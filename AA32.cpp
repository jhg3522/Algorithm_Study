#include<iostream>
#include<vector>
using namespace std;
// ��������
// �迭�� ������
// i , j ���������� ����
// ó�� a[i] ���Ŀ� �ִ� ���� ���� ���� ���� ����
// �̰��� n���� �ݺ�
int main() {
	int n, i, j, idx,tmp;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		idx = i; //i ���Ŀ� ���� ���� ���� �ε��� ��ȣ�� ���ؼ�
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[idx]) idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp; 
	}
	for (i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
}