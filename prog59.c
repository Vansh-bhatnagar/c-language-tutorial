/* extended method of for loop to print even number from 2 to 20 and simulteneously
// 20 to 2 even numbers
1,2,3,4,5,6,7,8,9,10
10,9,8,7,6,5,4,3,2,1
-1,-2,-3,-4,-5,-6,-7,-8,-9,-10
2,4,6,8,10,12,14,16,18,20
5,10,15,20,25,30,35,40,45,50
1,4,9,16,25,36,49,64,81,100  
1,-2,3,-4,5,-6,7,-8,9,-10 */
#include <stdio.h>
void main()
{
	int c, d;
	for(c=1;c<=10;c++)  //  for(c=-1;c>=-10;c--)    for(c=2;c<=20;c=c+2)
	{
		printf("\n %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d",
		   c, 11-c, c*-1, c-11 , c*2, c*5, c*c, (c%2==0)?-c:c, c*2-1 );
	}
}
