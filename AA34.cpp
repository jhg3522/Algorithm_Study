#include<iostream>
using namespace std;

int main() {
	int n, i, j, tmp;
	int arr[101];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i <n; i++) {
		cout << arr[i] << " ";
	}
}