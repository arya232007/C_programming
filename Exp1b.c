/******************************************************
name:arya vaze
class:civil
division:B
UIN number:25IC013
******************************************************/

#include <stdio.h>

int main()
{
    int physics;
    printf("enter your marks");
    scanf("%d",&physics);
    int chemistry;
    printf("enter your marks");
    scanf("%d",&chemistry);
    int maths;
    printf("enter your marks");
    scanf("%d",&maths);
    int sum;
    float avg;
    sum=physics+chemistry+maths;
    avg=(float)sum/3;
    printf("sum is %d\n avg is %f \n",sum,avg );
    char result;
    (avg>=50)?
    printf("student is eligible for admission \n"):
    printf("student is not eligible for \n");

    return 0;
}
