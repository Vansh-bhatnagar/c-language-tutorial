// usage of break statement
#include <stdio.h>	
void main()
{
	int n;
	for(n=1;n<=5;n++)
	{
		printf("\n %d",n);
		if (n==3)
			break;		// break will get the control out of loop
	}
	printf("\n*****END*****");
}
