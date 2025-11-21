name: Arya Vaze
UIN: 25IC013
branch:civil
/******************************************************************************************/

#include <stdio.h>

void counterFunction() {

    static int count = 0;

    count++;

    printf("The counter function has been called %d time(s).\n", count);
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();

    return 0;
}
