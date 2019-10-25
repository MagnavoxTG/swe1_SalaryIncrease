#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    int x = 0;
    char floatreadout[255] = "";
    float number = 0;

    while (x != 1) {
        // printf shows a message asking you to enter an employees salary
        printf("\nPlease enter the current salary of an employee (f.e. 1650.80): ");
        //scanf writes the input into a string (char array)
        scanf("%s", floatreadout);
        // strspan checks how many of the specified character are inside the string and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // if they are the same then there are only allowed characters in the string
        if (strspn(floatreadout, "0123456789.") == strlen(floatreadout)) {
            // the string gets cast into a float
            number = (float)atof(floatreadout);
            // if the number is bigger than 1000 it will increase the salary by 0.85%
            if (number > 1000) {
                number = number * 1.0085;
            // if the number is less than 1000 it will increase the salary by 2.09%
            } else {
                number = number * 1.0209;
            }
            // showing the new salary
            printf("The new salary is: %.2f", number);
            //breaking the while
            x = 1;
        } else {
            // displaying error message for using invalid characters in the input
            printf("invalid input");
        }
    }
}