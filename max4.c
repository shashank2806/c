/**
* find max. of four no.
* Author : Shashank Shekhar
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
	printf("Enter four no:\n");

	printf("A = ");
	int a = get_int();
	printf("B = ");
	int b = get_int();
	printf("C = ");
	int c = get_int();
	printf("D = ");
	int d = get_int();

	int f = (a > b) ? a : b;
	int g = (c > d) ? c : d;
	int h = (f > g) ? f : g;

	printf("Max no. = %i\n", h);


	return 0;
}