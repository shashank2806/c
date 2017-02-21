#include <stdio.h>

int main(void)
{
int height=6,i,j;

	for(j=2;j<=height+1;j++){

			for(i=height+1;i>j;i--){
				printf(" ");
			}
	    	for(i=0;i<j;i++){
				printf("#");
		}	
	printf("\n");}
	
}