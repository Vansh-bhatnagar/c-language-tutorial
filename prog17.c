// find the biggest of 3 values

#include<stdio.h>
void main(){
    int age1,age2,age3,big;
    printf("Enter the numbers:");
    scanf("%d%d%d",&age1,&age2,&age3);
    if((age1>age2)&&(age1>age3)){
        printf("%d is bigger",age1);
    }
    else if(age2>age3){
        printf("%d is bigger",age2);
    } else{
        printf("%d is bigger",age3);
    }
}
