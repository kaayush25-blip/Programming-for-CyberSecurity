/* Compound Savings Value
 Practical 2 - Exercise 3
   Aayush K.C.
*/
#include <stdio.h>

int main() {
    double monthlySaving;
    double accountValue = 0;
    double monthlyRate = 0.05 / 12;

    printf("Enter the monthly saving amount: $");
    scanf("%lf", &monthlySaving);// double has precision of 15 digits, so we use %lf for input

    while (monthlySaving < 0)// if the user enters a negative number, this loop will keep asking for a valid input
     {
        printf("Please enter a valid amount: $");
        scanf("%lf", &monthlySaving);
    }

    for(int i = 1; i <= 6; i++) 
    { 
        accountValue = (accountValue + monthlySaving) * (1 + monthlyRate);// calculate the account value after each month
        printf("Month %d: $%.2f\n", i, accountValue); 
    }

    return 0;//end of the program
}
