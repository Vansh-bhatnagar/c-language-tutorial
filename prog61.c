/* Febonacci series :   0   1   1   2   3   5	8	13	21	34	55	89
Accept a number n and print febonacci series numbers upto n   */
#include <stdio.h>
void main()
{
	int t1, t2, t3, c, n;
	printf("Print febonacci series upto which number: ");
	scanf("%d",&n);
	t1=0;
	t2=1;
	printf("\n %d\n %d",t1,t2);
	// for( ; t1+t2<=n ; )
	while(t1+t2<=n)
	{
		t3=t1+t2;
		printf("\n %d",t3);
		t1=t2;		// t2 value is copied into t1
		t2=t3;		// t3 value is copied into t2
	}
}
