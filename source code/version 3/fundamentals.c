#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include "fundamentals.h"
#include <stdio.h>

//version 1: Indexing

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



// version 2: Measuring

printf("*** Start of Measuring Strings Demo ***\n");
char buffer2[80]; // vaiable declaration
while (TRUE) {
    printf("Type a string (q - to quit):\n");
    gets(buffer2); // prompt user the value of buffer2
    if (strcmp(buffer2, "q") == 0) break; // compares string with letter 'q'
    printf("The length is %lu\n", strlen(buffer2)); // displays the length of string entered by the user
}
printf("*** End of Measuring Strings Demo ***\n\n");


// version 3: Copying

printf("*** Start of Copying Strings Demo ***\n");

// variable declaration
char destination[80];
char source[80];
while (TRUE) {
    destination[0] = '\0';
    printf("Destination string is reset to empty\n");
    printf("Type a source string (q - to quit):\n");
    gets(source); // prompt user source string that is to be copied.
    if (strcmp(source, "q") == 0) break; // compares string
    strcpy(destination, source); // copy source string to the destination
    printf("New destination string is \'%s\':\n", destination); // print new string that is copied to the destination
}
printf("*** End of Copying Strings Demo ***\n\n");
