/* FUTURE DATES CALCULATOR
Aayush K.C.
*/
#include <stdio.h>

int main()
 {
    int today, offset, future;

    printf("Enter today's day (0-6): ");
    scanf("%d", &today);

    printf("Enter the day offset: ");
    scanf("%d", &offset);

    // Calculate future day index
    future = (today + offset) % 7;

    // First switch to describe 'today'
    printf("Today is ");
    switch(today) 
    {
        case 0: printf("Sunday"); 
        break;
        case 1: printf("Monday"); 
        break;
        case 2: printf("Tuesday"); 
        break;
        case 3: printf("Wednesday"); 
        break;
        case 4: printf("Thursday"); 
        break;
        case 5: printf("Friday"); 
        break;
        case 6: printf("Saturday"); 
        break;
        default: printf("Invalid day");
    }

    // Second switch to describe the 'future'
    printf(" and the future day is ");
    switch(future)
     {
        case 0: printf("Sunday\n"); 
        break;
        case 1: printf("Monday\n"); 
        break;
        case 2: printf("Tuesday\n"); 
        break;
        case 3: printf("Wednesday\n");
         break;
        case 4: printf("Thursday\n");
         break;
        case 5: printf("Friday\n"); 
        break;
        case 6: printf("Saturday\n");
         break;
        default: printf("Invalid day\n");
    }

    return 0;
}