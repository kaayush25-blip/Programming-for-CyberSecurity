/* CalculateMortgageSecure.c
   Practical 4
   Secure mortgage calculation with input validation
Aayush K.C. */

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>


double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);
bool validateSalary(double salary);
bool readSalaries(double *salary1, double *salary2);
double calculateMortgage(double salary1, double salary2);

int main() {

    
    double salary1, salary2, mortgage;

    printf("Enter two salaries separated by a space:\n");

   
    if (!readSalaries(&salary1, &salary2)) {
        printf("Error: Invalid input. Program terminated.\n");
        return 1;
    }

    
    if (!validateSalary(salary1) || !validateSalary(salary2)) {
        printf("Error: Salaries must be between £0 and £1,000,000.\n");
        return 1;
    }

    
    mortgage = calculateMortgage(salary1, salary2);

    if (mortgage < 0) 
    {
        printf("Error: Mortgage calculation failed due to overflow.\n");
        return 1;
    }

    
    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

    return 0;
}


bool readSalaries(double *salary1, double *salary2) 
{

    
    if (salary1 == NULL || salary2 == NULL) {
        return false;
    }

    
    if (scanf("%lf %lf", salary1, salary2) != 2) 
    {

       
        while (getchar() != '\n');

        return false;
    }

    return true;
}


bool validateSalary(double salary) 
{

    const double MIN_SALARY = 0.0;
    const double MAX_SALARY = 1000000.0;

    if (salary < MIN_SALARY || salary > MAX_SALARY) 
    {
        return false;
    }

    return true;
}


double calculateMortgage(double salary1, double salary2) {

    double larger = largerSalary(salary1, salary2);
    double smaller = smallerSalary(salary1, salary2);
    double mortgage;

    
    if (larger > (LLONG_MAX / 3)) {
        return -1;
    }

    mortgage = larger * 3;

    
    if (mortgage > (LLONG_MAX - smaller)) {
        return -1;
    }

    mortgage += smaller;

    return mortgage;
}


double largerSalary(double salary1, double salary2) {

    if (salary1 > salary2)
        return salary1;
    else
        return salary2;

}


double smallerSalary(double salary1, double salary2) {

    if (salary1 > salary2)
        return salary2;
    else
        return salary1;

}