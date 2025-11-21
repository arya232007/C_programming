/******************************************************************************

arya vaze
UIN:251C013
rollno:10
branch:civil
*******************************************************************************/
#include <stdio.h>


int stringLength(char str[]) {
    int length = 0;
   
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
   
    char myString[] = "Hello, world!";
    
    
    int length = stringLength(myString);
    

    printf("The string is: \"%s\"\n", myString);
    printf("The length of the string without using library function is: %d\n", length);
    
    return 0;
}
