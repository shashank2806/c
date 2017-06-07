#include <stdio.h>

int main(void)
{
	int n,original,reverse=0,rem,x=100;
	printf("Enter the no.\n");
	scanf("%i",&n);
	original = n;

	while(n!=0)
	{
		rem = n%10;
		n=n/10;
		reverse=reverse*10+rem;
		x/=10;
	}
	printf("%i\n",reverse );
}