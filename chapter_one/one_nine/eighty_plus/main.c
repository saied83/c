#include <stdio.h>
#define MAXLINE 1000  // maximum buffer size per input chunk
#define THRESHOLD 20  // line length threshold

int getline_chunk(char line[], int maxline);

int main() {
    char line[MAXLINE];
    int len;

    while ((len = getline_chunk(line, MAXLINE)) > 0) {
        if (len > THRESHOLD)
            printf("%s", line);
    }

    return 0;
}

/* getline_chunk: read a line into s, return length */
int getline_chunk(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}
