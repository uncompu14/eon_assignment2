#include <stdio.h>

int main() {
	int num[5];
	int sum;
	int count = 0;
	while (count == 5)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &num[count]);
		sum = 0 + num[count];
		count = count++;
	}
}