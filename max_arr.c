/**
* max_arr.c
*
* Finds maximum in an array.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
	printf("how many no. you want to enter: \n");
	int n = get_int();

	int a[n];

	for(int i = 0; i < n; i++)
	{
		printf("\nEnter value: ");
		a[i] = get_int();
	}

	// Algorithm
	// Remember the loop.

	for(int i = 1; i <n; i++)
	{
		if(a[0] < a[i])
		{
			a[0] = a[i];
		}
	}

	printf("largest no. = %i\n",a[0]);
	return 0;
}