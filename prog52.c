/* nested for loop to print patters of numbers and patterns of * symbols
	1				5				5				1
	1 2				4 5				5 4 			2 2
	1 2 3			3 4 5			5 4 3			3 3 3
	1 2 3 4			2 3 4 5			5 4 3 2			4 4 4 4
	1 2 3 4 5		1 2 3 4 5		5 4 3 2 1		5 5 5 5 5 		*/	
#include <stdio.h>
void main()
{
	int r, c;
	for(r=5;r>=1;r--)	//	for(r=1;r<=5;r++)
	{
		printf("\n");
		for(c=5;c>=r;c--)	//	for(c=1;c<=r;c++)
		{
			printf("%d  ",r);	// printf("%d  ",c);
		}
	}
}
