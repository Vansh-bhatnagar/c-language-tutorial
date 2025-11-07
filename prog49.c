/* 	Nested for loops : A for loop inside another for loop
	 here, we will have outer loop and inner loop
	 the inner loop will execute for every value of outer loop  */
#include <stdio.h>
void main()
{
	int n, c;
	for(n=1 ; n<=3 ; n++)
	{
		printf("\n**********");	
		for(c=1;c<=5;c++)
		{
			printf("\n Hello");
		}
	}
}
