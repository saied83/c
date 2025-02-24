#include <stdio.h>
#include <string.h>

int main () {
    char s[10];
    char s2[10];
    strcat(s, "HelloGPT");
    strcat(s2, "meoMeo");

    int i, j;
    i = j = 0;
    int index = -1;
    float p = 1.45e-5;

    while (s[i] != '\0'){
        j=  0;
        while (s2[j] != '\0'){
            if(s[i++] == s2[j++]){
                index = i - 1;
                break;
            }
        }
        if(index != -1) break;
    }
    printf("%3.8f\n", p);
    
}