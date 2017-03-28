#include <stdio.h>
#include <stdlib.h>

#define D_MAX 3

int main(int argc, char *argv[])
{
	int a[D_MAX][D_MAX], b[D_MAX][D_MAX], c[D_MAX][D_MAX],i,j,k,d;
	int sum = 0;
	d = atoi(argv[1]);

	printf("Enter the first matrix\n");
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the second matrix\n");
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Your the first matrix\n");
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			printf("%4i",a[i][j]);
		}
		printf("\n");
	}

	printf("Your the second matrix\n");
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}

	printf("matrix multiplication\n");
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			sum = 0;
			for (k = 0; k < D_MAX; ++k)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;		
		}
	}

	
	for (i = 0; i < D_MAX; ++i)
	{
		for (j = 0; j < D_MAX; ++j)
		{
			printf("%4i",c[i][j]);
		}
		printf("\n");
	}


	return 0;
}