//program for finding if a number is prime or not.
#include <stdio.h>

int main()
{
	int x = 0,n,i;
	printf("Enter the no.: ");
	scanf("%i",&n);
	for(i=2;i<n;i++)
	{
		if (n%i==0)
			x++;
		//x will only be incremented if no is not prime.	
	}
	if(x>0)
		printf("Not Prime\n");
	else
		printf("Prime\n");
}
