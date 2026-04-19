#include <stdio.h>

// Function for swapping without pointers (Call by Value)
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// Function for swapping with pointers (Call by Reference)
void swapPointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, x, y;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call by Value
    swap(a, b);

    // Original values remain unchanged
    printf("\nOriginal values after call by value:\n");
    printf("a = %d b = %d\n", a, b);

    // Assign values again for pointer swap
    x = a;
    y = b;

    // Call by Reference
    swapPointer(&x, &y);

    printf("\nAfter swapping with pointers:\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}