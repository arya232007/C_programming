/******************************************************************************
arya vaze
UIN:251C013
rollno:10
branch:civil
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
     while (h > l) {
        if (str[l++] != str[h--]) {
            return false; 
        }
    }
    return true; 
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
 
    if (fgets(inputString, sizeof(inputString), stdin) == NULL) {
        return 1;
    }
     if (strlen(inputString) > 0 && inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }
     if (isPalindrome(inputString)) {
        printf("\"%s\" is a palindrome.\n", inputString);
    } else {
        printf("\"%s\" is not a palindrome.\n", inputString);
    }

    return 0;
}
