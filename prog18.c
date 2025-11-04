// program for good morning,good afternoon,good evening and good night by if-else condition
#include<stdio.h>
void main(){
    float time;
    printf("Enter the time(0 to 24):");
    scanf("%.2f",&time);
    if(time>=0 && time<=12){
        printf("Good morning");
    }
    else if (time>12 && time <= 17){
        printf("Good Afternoon");
    }
    else if(time>17 && time<=20){
        printf("Good Evening");
    } else{
        printf("Good Night");
    }
}