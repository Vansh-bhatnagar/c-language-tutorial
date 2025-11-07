/* Febonacci series :   0   1   1   2   3   5	8	13	21	34	55	89
	This series begins with 0 and 1 as base numbers.
	Every next number is given as the sum of the last 2 values   */
#include <stdio.h>
void main()
{
	int t1, t2, t3, c, n;
	printf("Enter how many terms do you want to print: ");
	scanf("%d",&n);
	t1=0;
	t2=1;
	printf("\n %d\n %d",t1,t2);
	for(c=1;c<=n-2;c++)
	{
		t3=t1+t2;
		printf("\n %d",t3);
		t1=t2;		// t2 value is copied into t1
		t2=t3;		// t3 value is copied into t2
	}
}
