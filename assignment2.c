#include <stdio.h>

int sum(int* array, int num);

int main(){
    int array[6]; // ������ �����Ǵ� ������ �߻��Ͽ� 5�� �ƴ� 6���� �迭 ����
    int isum;
    printf("���� �Է��ϼ��� : ");
    for (int i = 0; i < 6; i++) //���� �Է¹���.
    {
        scanf("%d", &array[i]);
    }
    isum = sum(array, 6);
    printf("�Է��� ���� ���� %d�Դϴ�.\n", isum);
    return 0;
}

int sum(int* array, int num) //���� ���ϴ� �Լ�
{
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += array[i];
    }
    return sum;
}
