/*print up to n natural numbers*/
#include <stdio.h>
int main()
{
	int n,a;
	a = 1;
	printf("Enter The number");
	scanf("%d",&n);

	while(a<=n)
	{
		
		printf("%d\n",a);
		a = a +1;
	}


	return 0;
}
