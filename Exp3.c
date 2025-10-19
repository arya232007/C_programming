name: arya vaze
UIN: 251C013
branch: civil
div: B roll no: 10

********************************************
#include <stdio.h>

int main() {
    int num1, num2, choice, result;

    start:
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Sum = %d\n", result);
            goto start;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Difference = %d\n", result);
            goto start;
