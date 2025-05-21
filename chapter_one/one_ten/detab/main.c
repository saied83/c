#include <stdio.h>
#include <stdbool.h>

#define TAB_REPLACE 4   // Number of spaces to replace a tab with
#define TAB_STOP 3      // Replace tabs only on every TAB_STOP-th line
#define MAXLENGTH 1000  // Max length of the input

int main() {
    char full_string[MAXLENGTH];
    int c;
    int current_line = 0;
    int index = 0;

    while ((c = getchar()) != EOF && index < MAXLENGTH - 1) {
        if (c == '\n') {
            full_string[index++] = c;
            current_line++;
        } else if (c == '\t' && current_line % TAB_STOP == 0) {
            for (int i = 0; i < TAB_REPLACE && index < MAXLENGTH - 1; i++) {
                full_string[index++] = ' ';
            }
        } else {
            full_string[index++] = c;
        }
    }

    // Null-terminate the string
    full_string[index] = '\0';

    // Print the processed string
    printf("%s", full_string);

    return 0;
}
