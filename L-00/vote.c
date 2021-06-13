#include <stdio.h>
// takes user age and tells if can vote or not
int main(){
    int age;
    printf("Enter your Age: ");
    scanf("%d",&age);
    if ( age >= 18)
    printf("You can Vote!");
    else
    printf("You can't Vote!");


    return 0;
}
