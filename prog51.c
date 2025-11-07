// printing multiplication tables of nos. 1 to 10 using nested for loop 
#include <stdio.h>
void main()
{
	int n, c;
	for(n=1 ; n<=10 ; n++)
	{
		printf("\n***Multiplication table of %d***",n);	
		for(c=1;c<=n;c++)
		{
			printf("\n %d x %d = %d",n, c, n*c);
		}
	}
}
