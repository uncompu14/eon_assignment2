#include <stdio.h>

int sum(int* array, int num);

int main(){
    int array[6]; // 스택이 오버되는 문제가 발생하여 5가 아닌 6까지 배열 생성
    int isum;
    printf("값을 입력하세요 : ");
    for (int i = 0; i < 6; i++) //값을 입력받음.
    {
        scanf("%d", &array[i]);
    }
    isum = sum(array, 6);
    printf("입력한 값의 합은 %d입니다.\n", isum);
    return 0;
}

int sum(int* array, int num) //합을 구하는 함수
{
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += array[i];
    }
    return sum;
}
