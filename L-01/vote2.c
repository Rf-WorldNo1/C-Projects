#include <cs50.h>
#include <stdio.h>
//takes user age and tells if you can vote or not
int main(void){
    int age;

    do{
        age = get_int("Please enter your age : ");
    }while(0>age);

    if(18 <= age){
        printf("You are allowed to vote.\n");
    }
    else{
        printf("You are not allowed to vote.\n");
    }
}
