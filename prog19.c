// student grade check by if-else
#include<stdio.h>
void main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("Grade A");
    }
    else if(marks>=80 && marks<=89){
        printf("Grade B");
    }
    else if(marks>=60 && marks<=79){
        printf("Grade C");
    }
    else if (marks >=40 && marks<=59){
        printf("Grade D");
    }
    else if (marks>=0 && marks<=39){
        printf("Fail");
    }
    else{
        printf("Invalid marks");
    }
}