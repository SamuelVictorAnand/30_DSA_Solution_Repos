/*
AIM:
To insert an element into an array at a specified position.

ALGORITHM:
1. Read number of elements in array.
2. Read array elements.
3. Read the position and element to insert.
4. Shift elements to the right.
5. Insert the new element.
6. Display the updated array.

CODE:
*/

#include <stdio.h>

int main() {
    int arr[50], n, pos, val, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = val;
    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
RESULT:
The element is inserted at the specified position in the array.
*/