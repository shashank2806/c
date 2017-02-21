#include <stdio.h>

int main (void){

	float owed = 1.6;
	int change = (int)(owed*100)%100;
	printf("%d %f\n", change,owed);
}