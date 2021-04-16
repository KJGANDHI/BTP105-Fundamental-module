#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include "fundamentals.h"
#include <stdio.h>

void fundamentals(){
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80];
    char num_input[10];
    int position;
    while (TRUE) {
        printf("Type a string (q - to quit):\n");
        gets(buffer1);  // prompt user value of buffer1.
        if(strcmp(buffer1, "q") == 0) break; // compares a string with letter 'q'.
        while (TRUE) {
            printf("Type the character position within the string:\n");
            gets(num_input); // prompt user value of name_input
            position = atoi(num_input); // function will convert string to integer numerical representation (ASCII values)

            // check the value of position is greater than the length of buffer1.
            if (position >= strlen(buffer1)) {
                printf("Wrong position... type again, please\n");
                continue;
            }
            // else print folloeing statement
            printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
            break;
        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n");
}     


int main(void)
{
printf("Hello, World!\n");
printf("This is a test of the MinGW gcc compiler.\n");
return 0; // return to operating system
}