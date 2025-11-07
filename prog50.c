// understanding nested for loop execution
#include <stdio.h>
void main()
{
	int n, c;
	for(n=3;n>=1;n--)	//	for(n=1 ; n<=3 ; n++)
	{
		printf("\n**********");	
		for(c=5;c>=1;c--)	// for(c=1;c<=5;c++)
		{
			printf("\n %d   %d   %d",n, c, n*c);
		}
	}
}
