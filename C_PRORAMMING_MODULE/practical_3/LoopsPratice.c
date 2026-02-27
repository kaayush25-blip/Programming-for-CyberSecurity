/* LoopsPractice.c
   Aayush K.C.
*/
#include <stdio.h>

int main()
 {
    printf("| 10 times |\n");
    // Exercise 1a: print message exactly 10 times using for loop
    for (int i = 0; i < 10; i++) 
    {
        printf("Welcome to C Programming!\n");
    }

    printf("\n | With iteration |\n");

    // Exercise 1b: print with iteration number
    // changing i <= 10 to i < 10 would print only 9 times
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d: Welcome to C Programming!\n", i);
    }

    return 0;
}