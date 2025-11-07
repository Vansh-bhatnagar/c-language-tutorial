/* nested for loop to print patters of * symbols
	*				* * * * *		* * * * *
	* *				* * * *			  * * * *
	* * *			* * *			    * * *
	* * * *			* *				      * *
	* * * * *		*						*			*/
#include <stdio.h>
void main()
{
	int r, c, s;
	for(r=1;r<=5;r++)
	{
		printf("\n");
		for(c=1;c<=r;c++)
		{
			printf("*  ");
		}
	}
	printf("\n-----------------------------");
	for(r=5;r>=1;r--)
	{
		printf("\n");
		for(c=1;c<=r;c++)
		{
			printf("*  ");
		}
	}
	printf("\n-----------------------------");
	for(r=5;r>=1;r--)
	{
		printf("\n");
		for(s=1;s<=5-r;s++)		// this for loop is to print spaces
		{
			printf("  ");
		}
		for(c=1;c<=r;c++)   // this loop is to print * symbols
		{
			printf(" *");
		}
	}
}

