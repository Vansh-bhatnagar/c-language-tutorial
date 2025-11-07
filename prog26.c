// program to accept the marks (theory & practical) and print the result as PASS or FAIL
#include <stdio.h>
void main()
{
	int th, pr;
	printf("enter theory marks ");
	scanf("%d",&th);
	printf("enter practical marks ");
	scanf("%d",&pr);

	if (th>=35 && pr>=50)
		printf("\n PASS");
	else
		printf("\n FAIL");
	
}

