/*백준6. 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
         첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
         첫째 줄에 A-B를 출력한다.*/
#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (0 < A && B < 10)
    {
        printf("%d", A - B);
    }
}