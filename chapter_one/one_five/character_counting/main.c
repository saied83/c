#include <stdio.h>

int main () {
    long nc;
    nc = 0;
    while (getchar() != EOF){
        nc++;
    }
    printf("\nTotal Charecters: %ld\n", nc);
}