
/* Print monthly expenditure 
Practical 2, Part 2 (a) 
Aayush K.C. */ 

#include<stdio.h>
int main()
{
    /*float to store decimal values*/
    float foodExpenses    = 300.0; //variables for food expenses
    float leisureExpenses = 100.0; //variables for leisure expenses
    float clothesExpenses = 50.0 ; //variables for cloth expenses
    float totalSpent; //Declares a variable to store the sum
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;
     printf("The total expenditure this month was $%.2f \n\n", totalSpent);
     /*%.2f this is used to display a float no., .2 displayes 2 decimal no.'s  */

 return 0;/*Indicates the program completed successfully*/
}