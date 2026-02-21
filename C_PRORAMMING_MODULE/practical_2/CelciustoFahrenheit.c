/* Celcius to Fahrenheit
 Practical 2 - Exercise 2
   Aayush K.C.
*/
#include <stdio.h>

int main() {
    // Variables to hold our temperature values
    double celsius;//double has precision fo 15 digits
    double fahrenheit;

    printf("Enter a degree in celsius: ");
    
    // Store the input in 'celsius'
    // We use %lf because the variable is a double
    scanf("%lf", &celsius); 

    // Note: I used 9.0 instead of 9 so C doesn't round the result to 1

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    printf("%.1f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0; 
}
