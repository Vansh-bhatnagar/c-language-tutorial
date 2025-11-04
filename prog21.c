// accept a 4 digit number and print the relation between the digits
// the sum of first two digits is greater than last two digits
#include <stdio.h>
void main(){
    int num, d1, d2, d3, d4, sum1, sum2;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    
    d4 = num % 10;          // Extracting the 4th digit
    d3 = (num / 10) % 10;   // Extracting the 3rd digit
    d2 = (num / 100) % 10;  // Extracting the 2nd digit
    d1 = (num / 1000) % 10; // Extracting the 1st digit

    sum1 = d1 + d2; // Sum of first two digits
    sum2 = d3 + d4; // Sum of last two digits

    if (sum1 > sum2) {
        printf("The sum of the first two digits (%d) is greater than the sum of the last two digits (%d).\n", sum1, sum2);
    } else if (sum1 < sum2) {
        printf("The sum of the first two digits (%d) is less than the sum of the last two digits (%d).\n", sum1, sum2);
    } else {
        printf("The sum of the first two digits (%d) is equal to the sum of the last two digits (%d).\n", sum1, sum2);
    }
}
