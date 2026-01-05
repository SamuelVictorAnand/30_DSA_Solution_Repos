/*
AIM:
To perform traversal of an array and display all its elements.

ALGORITHM:
1. Read the size of the array.
2. Read the elements into the array.
3. Display each element using a loop.

CODE:
*/

#include <stdio.h>

int main() {
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
RESULT:
The program displays all elements of the array entered by the user.
*/