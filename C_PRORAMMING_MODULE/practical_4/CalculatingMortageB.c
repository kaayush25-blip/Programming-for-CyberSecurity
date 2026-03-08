/* CalculateMortgageB.c
   Practical 4, Part 1 (b)
   Aayush K.C. */

#include <stdio.h>

// Function declarations
double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);

int main()
 {

    // Declare variables
    double salary1, salary2, mortgage;

    // Read salaries
    printf("Enter two salaries separated by a space:\n");
    scanf("%lf %lf", &salary1, &salary2);

    // Calculate mortgage
    mortgage = largerSalary(salary1, salary2) * 3;
    mortgage += smallerSalary(salary1, salary2);

    // Display result
    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

    return 0;
}

// Function stub for largerSalary
double largerSalary(double salary1, double salary2) 
{
    return 1;
}

// Function stub for smallerSalary
double smallerSalary(double salary1, double salary2) 
{
    return 1;
}