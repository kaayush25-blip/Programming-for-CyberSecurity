/* NO_OF_DAYS_IN_A_MONTH
   Aayush K.C.
*/
#include <stdio.h>

int main() 
{
    int month, year, days;
    char monthName[13][10] = 
    {"", "January", "February", "March", "April", "May", "June", "July", "August", "September",
    "October", "November", "December"};

    // prompt user to enter month and year
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // validate month
    if (month < 1 || month > 12) 
    {
        printf("Invalid month entered.\n");
        return 1;
    }

    // calculate days using if-else
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) 
        {
        days = 31; // months with 31 days
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) 
    {
        days = 30; // months with 30 days
    }
    else {
        // february - check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29; // leap year
        else
            days = 28; // normal year
    }

    // print result
    printf("The number of days in %s %d is %d.\n", monthName[month], year, days);

    return 0;
}