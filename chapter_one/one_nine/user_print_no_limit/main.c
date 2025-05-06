#include <stdio.h>
#define MAXLINE 1000  /* maximum buffer size per chunk */

/* function prototypes */
int getline_chunk(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;                /* length of current line chunk */
    int total_len = 0;      /* total length of current line */
    int max = 0;            /* maximum length seen so far */
    char line[MAXLINE];     /* current input line chunk */
    char longest[MAXLINE];  /* as much of the longest line as we can store */

    int tmp_len;
    total_len = 0;
    max = 0;
    int in_longest = 0;

    while ((len = getline_chunk(line, MAXLINE)) > 0) {
        tmp_len = len;
        total_len = len;

        /* check if line continues beyond buffer */
        while (line[len - 1] != '\n') {
            len = getline_chunk(line, MAXLINE);
            if (len == 0)
                break;
            total_len += len;
        }

        if (total_len > max) {
            max = total_len;
            copy(longest, line);  // store only first MAXLINE chars
        }
    }

    if (max > 0) {
        printf("Longest line length: %d\n", max);
        printf("As much as possible of the longest line:\n%s", longest);
    }

    return 0;
}

/* getline_chunk: read a line chunk into s, return length */
int getline_chunk(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assumes 'to' is large enough */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
