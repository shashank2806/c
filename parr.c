#include <stdio.h>
#include <cs50.h>

int main (void)
{
	int *x;
	x = malloc(sizeof(long long)*3);
	scanf("%i %i %i",x, (x+1), (x+2));
	printf("%i\t %i\t %i\n",(int)x, (int)(x+1), (int)(x+2));
	printf("%i\t %i\t %i\n",*x, *(x+1), *(x+2));
	free(x);
}