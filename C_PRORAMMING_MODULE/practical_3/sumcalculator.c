/* SumCalculator.c
   Aayush K.C.
*/
#include <stdio.h>

int main()
 {
    int number;
    int sum = 0;
    int count = 0;

    printf("=== Sum Calculator ===\n");
    printf("Enter positive numbers (negative to stop):\n");

    // keep looping until user enters a negative number
    while (1) 
    {
        printf("Enter number: ");

        // check if input is a valid integer
        if (scanf("%d", &number) != 1)
         {
            printf("Invalid input!\n");
            while (getchar() != '\n'); // clear input buffer
            continue; // ask again without counting
        }

        // stop the loop if number is negative
        if (number < 0)
            break;

        // add number to sum and increment count
        sum += number;
        count++;
        printf("Current sum: %d\n", sum);
    }

    printf("\nFinal sum: %d\n", sum);
    printf("Total numbers entered: %d\n", count);

    return 0;
}