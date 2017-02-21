#include <stdio.h>

int main(void)
{
	int n,i;
	printf("Enter no.: \n");
	scanf("%i",&n);
	for(i=n;i>1;i--)
	{
		n=n*(i-1);
	}
	printf("%i\n",n);
}