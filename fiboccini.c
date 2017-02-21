#include <stdio.h>

int main(void)
{
	int n,c,i;
	printf("Enter no.: ");
	scanf("%i",&n);
	int a = 0;
	int b = 1;
	printf("%i\n%i\n",a,b);

	for(i=0;i<n-2;i++)
	{
		c = a+b;
		printf("%i\n",c);
		a=b;
		b=c;
	}
}