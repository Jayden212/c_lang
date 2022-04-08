#include <stdio.h>

int main(void)
{
    int first;
    int second;
    printf("첫번째 수를 입력하세요 >");
    scanf("%d", &first);
    printf("첫번쨰 수는 %d 입니다.\n두번쨰 수를 입력하세요.", first);
    scanf("%d", &second);
    printf("두번째 수는 %d 입니다.\n두 수의 합은 %d 입니다.\n", second, first + second);
}

