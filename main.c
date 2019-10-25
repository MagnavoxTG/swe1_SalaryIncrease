#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    int x = 0;
    char floatreadout[255] = "";
    float number = 0;

    while (x != 1) {
        // printf shows a message asking you to enter a positive number
        printf("\nPlease enter the current salary of an employee (f.e. 1650.80): ");
        //scanf writes the input into a string (char array)
        scanf("%s", floatreadout);
        //gets(intreadout);
        // strspan checks how many of the specified character are inside the string and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // if they are the same then there are only allowed characters in the string
        if (strspn(floatreadout, "0123456789.") == strlen(floatreadout)) {
            number = (float)atof(floatreadout);
            if (number > 1000) {
                number = number * 1.0085;
            } else {
                number = number * 1.0209;
            }
            printf("The new salary is: %.2f", number);
            x = 1;
        } else {
            printf("invalid input");
        }
    }
}