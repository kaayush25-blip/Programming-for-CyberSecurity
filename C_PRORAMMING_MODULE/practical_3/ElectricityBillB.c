/* ElectricityBillB.c
   Aayush K.C.
*/
#include <stdio.h>

#define MAX_CUSTOMERS 10

int main()
 {
    int numCustomers;
    int previousMetre, currentMetre, day, month;
    int totalUnits = 0;
    int valid;
    int c;

    // ask how many customers to process (max 10)
    printf("How many customers to process (max %d): ", MAX_CUSTOMERS);
    if (scanf("%d", &numCustomers) != 1 || numCustomers < 1 || numCustomers > MAX_CUSTOMERS) 
    {
        printf("Error: Enter a number between 1 and %d\n", MAX_CUSTOMERS);
        return 1;
    }

    // loop through each customer
    for (c = 1; c <= numCustomers; c++)
     {
        printf("\n--- Customer %d ---\n", c);
        printf("Enter previous metre, current metre, day and month: ");

        // validate all 4 values were entered correctly
        if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) {
            printf("Error: Invalid input format\n");
            return 1;
        }

        // display entered values
        printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

        valid = 1; // assume valid until an error is found

        // validate current metre reading
        if (currentMetre < 0 || currentMetre > 9999) {
            printf("Error: current meter reading out of range\n"); valid = 0;
        }
        // validate previous metre reading
        if (previousMetre < 0 || previousMetre > 9999) {
            printf("Error: previous meter reading out of range\n"); valid = 0;
        }
        // validate previous not greater than present
        if (previousMetre > currentMetre) {
            printf("Error: previous reading is more than present reading\n"); valid = 0;
        }
        // validate electricity used not more than 1000
        if ((currentMetre - previousMetre) > 1000) {
            printf("Error: electricity used is more than 1000 units\n"); valid = 0;
        }
        // validate month range
        if (month < 1 || month > 12)
         {
            printf("Error: month out of range\n"); valid = 0;
        } else {
            // validate days for 31-day months
            if ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)
                && (day < 1 || day > 31))
                { printf("Error: invalid day for this month\n"); valid = 0; }
            // validate days for 30-day months
            else if ((month==4||month==6||month==9||month==11)
                && (day < 1 || day > 30))
                { printf("Error: invalid day for this month\n"); valid = 0; }
            // validate days for February
            else if (month == 2 && (day < 1 || day > 29))
                { printf("Error: invalid day for February\n"); valid = 0; }
        }

        // only add to total if all data was valid
        if (valid)
            totalUnits += (currentMetre - previousMetre);
    }

    // display summary at the end
    printf("\n=== Summary ===\n");
    printf("Total electricity units used across all customers: %d\n", totalUnits);

    return 0;
}