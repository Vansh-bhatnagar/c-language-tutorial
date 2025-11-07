// extended method of for loop
#include <stdio.h>
void main()
{
	int c, d;
/*	for(c=1;c<=10;c++)
	{
		// printf("\n %d\t%d",c,c+100);
		printf("\n %d\t%d",c,11-c);
	}   */
	
	for(c=1,d=10 ; c<=10 ; c++,d--)
	{
		printf("\n %d\t%d",c,d);
	}
}
