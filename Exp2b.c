/* name:arya vaze
UIN:25IC013
branch:civil
div:B*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum = 0;

    printf("enter a initial number");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(int i=num1;i<=num2;i++){
        if(i%2!=0) {
            sum += i;
        }
    }

    printf("Sum is %d", sum);

    return 0;
}
