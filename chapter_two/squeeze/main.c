#include <stdio.h>
#include <string.h>


int main () {
    char s[10];
    char s2[10];
    strcat(s, "HelloGPT");
    strcat(s2, "meoMeo");

    int i, j;
    i = j = 0;

    while (s[i] != '\0'){
        j=  0;
        while (s2[j] != '\0'){
            if(s[i++] == s2[j++]){
                s[i] = '-';
            }
        }

    }
    printf("%s\n", s);
    
}