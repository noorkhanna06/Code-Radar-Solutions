#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
     
    scanf("%d", &num);

    // Get the lowest set bit
    int lowestSetBit = num & -num;

    // Print the result
    printf(" %d\n", lowestSetBit);

    return 0;
}