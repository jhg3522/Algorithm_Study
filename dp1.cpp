#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//���� ��ȹ�� bottom - up
// �����ź��� �ϳ��� �÷������鼭 ��Ģã�Ƽ�
//��ȭ�� �����
//3m���� ������ �־������� ��Ģ�� ���ؼ� 1m�ͺ��� �����غ���
//1m -> 1m	1��
//2m -> 1m 1m , 2m	2��
//3m -> 1m 1m 1m , 2m 1m, 1m 2m		3�� (1m+2m)
//4m -> 1m 1m 1m 1m, 2m 1m 1m, 1m 2m 1m, 1m 1m 2m, 2m 2m	 5��(3m+2m)
//5m -> 1m 1m 1m 1m 1m, 2m 1m 1m 1m, 1m 2m 1m 1mm ,1m 1m 2m 1m, 1m 1m 1m 2m,
//2m 2m 1m, 2m 1m 2m, 1m 2m 2m -> 8�� (3m+4m)

int main() {
	int n;
	int arr[100] = { 0,1,2, };
	cin >> n;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	cout << arr[n];
	
}