#include <cs50.h>
#include <stdio.h>
// tells if user can vote or not
int main(void){
    int age;
    age = get_int("Please enter your age : ");

    if(18 <= age){
        printf("You are allowed to vote.\n");
    }
    else{
        printf("You are not allowed to vote.\n");
    }
}
