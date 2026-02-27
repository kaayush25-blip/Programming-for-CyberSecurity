/* ElectricityBillA.c
   Aayush K.C.
*/
#include <stdio.h>

int main() 
{
    // declare variables for metre readings, day and month
    int previousMetre, currentMetre, day, month;

    // prompt user to enter all four values
    printf("Enter previous metre, current metre, day and month: \n");

    // read all four values and check scanf succeeded
    if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) 
    {
        printf("Error: Invalid input format.\n");
        return 1;
    }

    // display the entered values
    printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

    // validate current metre reading (0-9999)
    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: current meter reading out of range.\n");

    // validate previous metre reading (0-9999)
    if (previousMetre < 0 || previousMetre > 9999)
        printf("Error: previous meter reading out of range.\n");

    // validate previous not greater than present
    if (previousMetre > currentMetre)
        printf("Error: previous reading is more than present reading.\n");

    // validate electricity used not more than 1000
    if ((currentMetre - previousMetre) > 1000)
        printf("Error: electricity used is more than 1000 units.\n");

    // validate month in range 1-12
    if (month < 1 || month > 12) 
    {
        printf("Error: month out of range.\n");
    } 
    else 
    {
        // validate days for months with 31 days (Jan, Mar, May, Jul, Aug, Oct, Dec)
        if ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            && (day < 1 || day > 31))
            printf("Error: Invalid day for this month.\n");

        // validate days for months with 30 days (Apr, Jun, Sep, Nov)
        else if ((month==4||month==6||month==9||month==11)
            && (day < 1 || day > 30))
            printf("Error: Invalid day for this month.\n");

        // validate days for February (assuming max 29 days)
        else if (month == 2 && (day < 1 || day > 29))
            printf("Error: Invalid day for February.\n");
    }

    return 0;
}