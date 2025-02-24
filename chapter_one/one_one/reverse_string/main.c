#include <stdio.h>

int main () {
    char x[6];
    x[0] = 'H',
    x[1] = 'e';
    x[2] = 'l';
    x[3] = 'l';
    x[4] = '0';
    x[5] = '\0';
    int length;
    for(length = 0; x[length] != '\0'; length++ ){
    }
    while (length > 0){
        length--;
        printf("%c", x[length]);
    }
}



// #include <stdio.h>
// #include <string.h> // For strcpy
// #include <stdlib.h> // For atoi

// int main() {
//     int length;
//     FILE *hand;
//     char name[100];
//     char line[100];
//     hand = fopen("input.txt", "r");

//     if (hand == NULL) {
//         printf("Error opening file!\n");
//         return 1;  // Exit if the file could not be opened
//     }

//     int i = 0;
//     while (fgets(line, 100, hand) != NULL) { // fgets reads a line and ensures no buffer overflow
//         if (i == 0) {
//             length = atoi(line);  // Convert the string to an integer
//             i++;
//         } else if (i == 1) {
//             strcpy(name, line);  // Copy the string to the name array
//             i++;
//         } else {
//             break;
//         }
//     }

//     fclose(hand);  // Don't forget to close the file

//     printf("Length: %d\n", length);
//     printf("Name: %s\n", name);
//     return 0;
// }
