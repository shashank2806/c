#include <stdio.h>
int main(void){
//float owed;
int a,b,c,d,e,f,change;	

	change=15;
	printf("%d\n",change);
	if (change>=25)
	{
		printf("test\n" );
		a=change/25;
		b=change%25;
		}
		if (b>=10){
		c = b/10;
		d = b%10;
		}
		
		if (d>=5){
		e = d/5;
		f = d%5;
	} 

	else if (change>=10 && change <25)
	{
		c = change/10;
		d = change%10;
		
		if (d>=5){
		e = d/5;
		f = d%5;
	}

	else if (change >=5 && change<10)
	{
		e = d/5;
		f = d%5;
	}


	
printf("a%i\nb%i\nc%i\nd%i\ne%i\nf%i\ntotal=%i\n",a,b,c,d,e,f,c+f);
//printf("%i\n",x+y+z+k);

}}