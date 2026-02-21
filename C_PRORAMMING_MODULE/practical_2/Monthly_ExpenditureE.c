
/* Print monthly expenditure 
Practical 2, Part 2 (e) 
Aayush K.C. */ 

#include<stdio.h>
int main()

{   
    /*Creates a fixed integer that cannot be changed*/
    const int Accomodation=500;

    /*float to store decimal values*/
    float foodExpenses         ;       
    float leisureExpenses      ;      
    float clothesExpenses      ;      
    float travelExpenses       ;
    float totalSpent;          /*Declares a variable to store the sum*/

     printf("\n Enter food expenses: "); /*asks the user to type the value*/
    scanf("%f", &foodExpenses)         ; /*reads the number and saves it in foodExpenses*/

    printf("\n Enter leisure expenses: ");
    scanf("%f" ,&leisureExpenses); /*reads the number and saves it in leisureExpenses*/
    
    printf("\n Enter clothes expenses: ");
    scanf("%f" , &clothesExpenses);/*reads the number and saves it in clothesExpenses*/

    printf("\n Enter travel expenses: ");
    scanf("%f" , &travelExpenses);  /*reads the number and saves it in travelExpenses*/

    totalSpent   = foodExpenses + leisureExpenses + clothesExpenses + Accomodation + travelExpenses;
     
    printf("The total expenditure this month was $%.2f \n\n", totalSpent);
     /*%.2f this is used to display a float no., .2 displayes 2 decimal no.'s  */

 return 0;/*Indicates the program completed successfully*/
}