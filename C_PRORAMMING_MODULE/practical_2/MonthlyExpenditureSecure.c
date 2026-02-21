/* Monthly Expenditure Calculator
   Practical 2, Part 3
   Aayush K.C.

   ISSUES FOUND IN ORIGINAL PROGRAM:
   1. Used scanf() which is unsafe - if user types letters or symbols like
      "abc" or "12a" the program crashes or gives wrong output
   2. No validation loop - program just exits when negative number is entered
      instead of asking the user to try again 

#include <stdio.h>

int main() {
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    const int ACCOMMODATION = 500;

    printf("\n Enter food expenses: ");
    scanf(" %f", &foodExpenses);

    if (foodExpenses < 0) {
        printf("Error: Food expenses cannot be negative.\n");
        return 1;
    }

    printf(" Enter leisure expenses: ");
    scanf(" %f", &leisureExpenses);
    if (leisureExpenses < 0) {
        printf("Error: Leisure expenses cannot be negative.\n");
        return 1;
    }

    printf(" Enter clothes expenses: ");
    scanf(" %f", &clothesExpenses);
    if (clothesExpenses < 0) {
        printf("Error: Clothes expenses cannot be negative.\n");
        return 1;
    }

    printf(" Enter travel expenses: ");
    scanf(" %f", &travelExpenses);
    if (travelExpenses < 0) {
        printf("Error: Travel expenses cannot be negative.\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + ACCOMMODATION + travelExpenses;
    printf("\n The total expenditure this month was £%.2f\n\n", totalSpent);

    return 0;
}
/*Print monthly expenditure 
   Practical 2, Part 3
   Aayush K.C.

   WEAKNESSES FOUND:
   1. scanf() is unsafe - fails when letters or symbols are entered
   2. No validation - accepted negative numbers and invalid input

   IMPROVEMENTS MADE:
   1. Replaced scanf() with fgets() - reads whole line safely
   2. Used sscanf() with %n - detects letters after numbers like 12a
   3. Added while loop validation - rejects negatives and invalid input
   4. Accommodation made a constant - avoids repeating literal value 500 */

#include <stdio.h>

const int Accommodation = 500;

int main() {
    float foodExpenses, leisureExpenses, clothesExpenses, travelExpenses, totalSpent;
    char input[100];
    int n;
    int result;

    /* get food expenses */
    printf(" Enter food expenses: $");
    fgets(input, 100, stdin);
    result = sscanf(input, "%f %n", &foodExpenses, &n);
    
    while (1) 
    {
        if (result != 1) 
        {
            printf("Invalid input. Please enter a positive number: $");
        }
         else if (foodExpenses < 0) 
        {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else if (input[n] != '\n' && input[n] != '\0') 
        {
            printf("Invalid input. Please enter a positive number: $");
        } else
         {
            break;
        }
        fgets(input, 100, stdin);
        result = sscanf(input, "%f %n", &foodExpenses, &n);
    }

    /* get leisure expenses */
    printf(" Enter Leisure Expenses: $");
    fgets(input, 100, stdin);
    result = sscanf(input, "%f %n", &leisureExpenses, &n);
    while (1) {
        if (result != 1) {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else if (leisureExpenses < 0)
         {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else if (input[n] != '\n' && input[n] != '\0') 
        {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else
         {
            break;
        }
        fgets(input, 100, stdin);
        result = sscanf(input, "%f %n", &leisureExpenses, &n);
    }

    /* get clothes expenses */
    printf(" Enter Clothes Expenses: $");
    fgets(input, 100, stdin);
    result = sscanf(input, "%f %n", &clothesExpenses, &n);
    while (1) {
        if (result != 1) {
            printf("Invalid input. Please enter a positive number: $");
        } else if (clothesExpenses < 0) {
            printf("Invalid input. Please enter a positive number: $");
        } else if (input[n] != '\n' && input[n] != '\0') {
            printf("Invalid input. Please enter a positive number: $");
        } else {
            break;
        }
        fgets(input, 100, stdin);
        result = sscanf(input, "%f %n", &clothesExpenses, &n);
    }

    /* get travel expenses */
    printf(" Enter Travel Expenses: $");
    fgets(input, 100, stdin);
    result = sscanf(input, "%f %n", &travelExpenses, &n);
    while (1) {
        if (result != 1) 
        {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else if (travelExpenses < 0) 
        {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else if (input[n] != '\n' && input[n] != '\0')
        {
            printf("Invalid input. Please enter a positive number: $");
        } 
        else
        {
            break;
        }
        fgets(input, 100, stdin);
        result = sscanf(input, "%f %n", &travelExpenses, &n);
    }

    /* calculate and print total */
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travelExpenses + Accommodation;
    printf("Total monthly expenditure is: $%.2f\n", totalSpent);

    return 0;
}