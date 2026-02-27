
/* Unsafe Versions of Loops: Exercise-3a
#include <stdio.h>
int main() 
{
    // ❌ DANGEROUS: Infinite loop with unsigned integers
    unsigned int i = 10;
    
    printf("This loop will never end!\n");
    // DON'T RUN THIS! Just analyse it
    while (i >= 0) {  // Always true for unsigned!
        printf("%u ", i);
        i--;
    }
    return 0;
}
    */

// Secure Version 
  // Aayush K.C.
#include <stdio.h>

#define MAX_ITERATIONS 100

int main() 

{  
 // EXERCISE 3a - SAFE LOOP WITH SIGNED INTEGERS
 int j = 10;
    while (j >= 0) 
    {
        printf("%d ", j);
        j--;
    }
    printf("\nLoop completed safely!\n");

     // EXERCISE 3b - MAX ITERATION LIMIT
    int userInput;
    int iterations = 0;

    printf("\nGuess the number (between 1 and 10): ");

    // loop has a maximum limit to prevent infinite loop
    while (iterations < MAX_ITERATIONS) 
    {

        // check for non-numeric input
        if (scanf("%d", &userInput) != 1) 
        {
            printf("Invalid input! Try again: ");
            while (getchar() != '\n'); // clear buffer
            iterations++;
            continue;
        }

        // check if guess is correct
        if (userInput == 7) 
        {
            printf("Correct! You guessed it in %d attempts.\n", iterations + 1);
            break;
        }

        printf("Wrong! Try again: ");
        iterations++;
    }

    // if all attempts used without correct guess
    if (iterations >= MAX_ITERATIONS)
        printf("Maximum attempts reached. Game over!\n");

    return 0;
}