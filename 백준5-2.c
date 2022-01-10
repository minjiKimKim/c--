/*백준5-2. 첫째 줄에 A+B를 출력한다. + A>0이고 B<10임*/
#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > 0 && B < 10)
	{
		printf("%d\n", A + B);
	}
	return 0;
}