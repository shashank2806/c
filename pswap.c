#include <stdio.h>

void swap(int *x,int *y);
int	main(void)
{
	int x = 10;
	int y = 20;
	swap(&x,&y);
	printf("x = %i\n", x);
	printf("y = %i\n", y);
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

