/* MultiplicationTable
   Aayush K.C.
*/
#include <stdio.h>

#define MAX_SIZE 9

int main() 
{
    int userSize;
    int i, j;

    printf("Enter table size (1-%d): ", MAX_SIZE);

    // validate input is a number
    if (scanf("%d", &userSize) != 1) 
    {
        printf("Error: Invalid input!\n");
        return 1;
    }

    // validate range to prevent too many iterations
    if (userSize < 1 || userSize > MAX_SIZE) 
    {
        printf("Error: Size must be between 1 and %d!\n", MAX_SIZE);
        return 1;
    }

    // print table header
    printf("\nMultiplication Table (%dx%d):\n", userSize, userSize);
    printf("    ");
    for (i = 1; i <= userSize; i++)
        printf("%4d", i);
    printf("\n    ");
    for (i = 1; i <= userSize; i++)
        printf("----");
    printf("\n");

    // nested loops to print each row of the table
    for (i = 1; i <= userSize; i++) 
    {
        printf("%3d |", i);
        for (j = 1; j <= userSize; j++)
            printf("%4d", i * j);
        printf("\n");
    }

    return 0;
}