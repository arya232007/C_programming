name: Arya Vaze
UIN:251C013
roll no:10
branch:civil
****************************************************
#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[] = {3, 5, 1, 7, 0, 6, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize 'largest' with the first element of the array
    int largest = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; i++) {
        // If the current element is greater than 'largest', update 'largest'
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array
