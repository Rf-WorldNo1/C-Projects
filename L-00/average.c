// this program is made on 12/6/21 by Rahil Mahamwal for taking the subject marks then taking total marks and then taking average for total marks and giving compliment for it...

#include <stdio.h>

// this takes maths marks
int main(){
    int maths_marks;
    printf("Enter your Maths Marks: ");
    scanf("%d",&maths_marks);
    
// this takes english marks
    int eng_marks;
    printf("Enter your English Marks: ");
    scanf("%d",&eng_marks);

// this takes science marks
    int sci_marks;
    printf("Enter your Science Marks: ");
    scanf("%d",&sci_marks);

// this takes hindi marks
    int hin_marks;
    printf("Enter your Hindi Marks: ");
    scanf("%d",&hin_marks);

// this takes sst marks
    int sst_marks;
    printf("Enter your Social Studies Marks: ");
    scanf("%d",&sst_marks);

// this function totals the marks
    int tot_marks;
    tot_marks=(maths_marks+eng_marks+sci_marks+hin_marks+sst_marks);
    printf("%d + %d + %d + %d + %d = %d \n",maths_marks,eng_marks,sci_marks,hin_marks,sst_marks, tot_marks);

// this takes 5 for further update   
    int five;
    printf("Enter 5 to take out average(After entering 5 , press enter, then type any letter and press enter for average): \n");
    scanf("%d",&five);

// takes out average for tot_marks
    int average;
    average=(tot_marks/five);
    scanf("%d",&average);
    printf("%d/%d=%d = Average \n",tot_marks,five,average);

    
// below functions give the compliment for average
    if ( average >= 90)
    printf("Excellent! Keep it up!👌👍👏");

    if ( average >=60)
    printf("Nice Average!! Can Improve!👍");

    if ( 40 >= average)
    printf("Needs Improvement!");

    return 0;
}
