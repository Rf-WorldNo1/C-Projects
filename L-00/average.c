#include <stdio.h>

int main(){
    int maths_marks;
    printf("Enter your Maths Marks: ");
    scanf("%d",&maths_marks);

    int eng_marks;
    printf("Enter your English Marks: ");
    scanf("%d",&eng_marks);

    int sci_marks;
    printf("Enter your Science Marks: ");
    scanf("%d",&sci_marks);

    int hin_marks;
    printf("Enter your Hindi Marks: ");
    scanf("%d",&hin_marks);

    int sst_marks;
    printf("Enter your Social Studies Marks: ");
    scanf("%d",&sst_marks);

    int tot_marks;
    tot_marks=(maths_marks+eng_marks+sci_marks+hin_marks+sst_marks);
    printf("%d + %d + %d + %d + %d = %d \n",maths_marks,eng_marks,sci_marks,hin_marks,sst_marks, tot_marks);

    int five;
    printf("Enter 5 to take out average(After entering 5 , press enter, then type any letter and press enter for average): \n");
    scanf("%d",&five);

    int average;
    average=(tot_marks/five);
    scanf("%d",&average);
    printf("%d/%d=%d = Average \n",tot_marks,five,average);

    if ( average >= 90)
    printf("Excellent! Keep it up!👌👍👏");

    if ( average >=60)
    printf("Nice Average!! Can Improve!👍");

    if ( 40 >= average)
    printf("Needs Improvement!");

    return 0;
}