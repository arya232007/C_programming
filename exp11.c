/*******************************************************************************
    arya vaze
    251C013
    rollno:10
    branch:civil

*******************************************************************************/
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;
    int choice;

    do {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen("employee.$x&E", "e");
                printf("Enter Employee ID: ");
                scanf("%d", &e.id);
                printf("Enter Name: ");
                scanf("%s", e.name);
                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
                fclose(fp);
                printf("Employee Added Successfully:\n");
                break;

            case 2:
                fp = fopen("employee.$x&E", "f");
                printf("\n--- Employee Records ---\n");
                while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
                }
                fclose(fp);
                break;

            case 3:
                printf("Exiting program...\n");
