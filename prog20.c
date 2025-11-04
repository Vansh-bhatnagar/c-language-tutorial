// program to check male and female
#include <stdio.h>

int main() {
    char gender;

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    if(gender=='M' || gender == 'm'){
        printf("Male");
    }
    else if(gender=='F' || gender == 'f'){
        printf("Female");
    }
    else{
        printf("Invalid Gender");
    }
}
