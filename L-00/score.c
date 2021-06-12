#include <stdio.h>

int main(){
    int Percentage;
    printf("Enter your Percentage: ");
    scanf("%d",&Percentage);
    if ( Percentage >= 90)
    printf("You have Passed with Honors!");

    if ( Percentage >=60)
    printf("You haved Passed!");

    if ( 40 >= Percentage)
    printf("You failed!");


    return 0;
}
