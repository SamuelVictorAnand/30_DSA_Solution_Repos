/*
AIM:
To delete an element from an array at a specified position.

ALGORITHM:
1. Read number of elements.
2. Read array elements.
3. Read position of element to delete.
4. Shift elements left.
5. Display the updated array.

CODE:
*/

#include <stdio.h>

int main() {
    int arr[50], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for(i = pos-1; i < n-1; i++)
        arr[i] = arr[i+1];

    n--;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
RESULT:
The element is deleted from the specified position.
*/