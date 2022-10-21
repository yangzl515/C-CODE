#include <stdio.h>
#define N 10
int main()
{
	int i, j, t,a[10];
	printf("please input 10 number :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i], 10);

	for (i = 0; i < N - 1; i++)
		for(j=0;j<N-(i+1);j++)
			{
			if (a[j] > a[j + 1])
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	printf("number in rise order :\n");
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);
}