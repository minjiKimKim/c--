/*����6. �� ���� A�� B�� �Է¹��� ����, A-B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
         ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
         ù° �ٿ� A-B�� ����Ѵ�.*/
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