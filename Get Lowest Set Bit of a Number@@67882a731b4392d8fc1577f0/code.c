#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Get the lowest set bit
    int lowestSetBit = num & -num;

    // Print the result
    printf("The lowest set bit of %d is: %d\n", num, lowestSetBit);

    return 0;
}