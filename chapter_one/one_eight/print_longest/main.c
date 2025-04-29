#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

int get_line(char s[], int max) {
    int i = 0;
    int c;
    while (i < max - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        ++i;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main() {
    int len;
    int max = 0; // Initialize max
    char line[MAXLINE];
    char maxline[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(maxline, line);
        }
    }
    if (max > 0) {
        printf("%s", maxline);
    }
    return 0;
}
