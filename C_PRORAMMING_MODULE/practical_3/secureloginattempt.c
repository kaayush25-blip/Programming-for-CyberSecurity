/* SECURE LOGIN SYSTEM
   Aayush K.C.
*/
#include <stdio.h>
int main()
 {
   const int CORRECT_PIN = 1234; // the correct PIN code
    const int MAX_ATTEMPTS = 3;  // maximum allowed attempts before locking the account
    int enteredPin;       // stores the PIN entered by the user
    int attempts = 0;     // counts how many failed attempts have been made
    int remaining;        // stores how many attempts are left after a wrong PIN

    while (attempts < MAX_ATTEMPTS) 
    {

        printf("Enter PIN: ");

        // check if input is a valid number
        // scanf returns 1 if it successfully reads an integer
        if (scanf("%d", &enteredPin) != 1) 
        {
            printf("Error: Invalid input, numbers only.\n");
            while (getchar() != '\n'); // clear the input buffer so next scanf works
            continue; // skip the rest of the loop, don't count as an attempt
        }

        // check if the entered PIN matches the correct PIN
        if (enteredPin == CORRECT_PIN)
        {
            printf("Access Granted!\n");
            return 0; // exit program successfully
        }

        // if we reach here, the PIN was wrong
        attempts++;  // increment failed attempt counter
        remaining = MAX_ATTEMPTS - attempts; 

        // only show remaining attempts if user still has tries left
        if (remaining > 0)
            printf("Wrong PIN. %d attempt(s) left.\n", remaining);
    }

    printf("Access Denied. Account Locked.\n");

    return 0;
}
