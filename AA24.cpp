#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int i,n,now,pre,pos;
	scanf("%d", &n);
	vector<int> a(n); //0���� �ʱ�ȭ��
	scanf("%d", &pre);
	for (i = 0; i < n; i++) {
		scanf("%d", &now);
		pos = abs(pre - now);
		if (pos > 0 && pos < n && a[pos] == 0) a[pos]=1;
		else {
			printf("NO");
			return 0;
		}
		pre = now;
	}
	printf("YES");

	return 0;
}