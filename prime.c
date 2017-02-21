#include <stdio.h>

int main()
{
	int x=0,y =0,n,i;
	printf("Enter the no.: ");
	scanf("%i",&n);
	for(i=2;i<n;i++)
	{
		if (n%i==0)
			x++;
		else
			y++;	
	}
	if(x>0)
		printf("Not Prime\n");
	else
		printf("Prime\n");
}
