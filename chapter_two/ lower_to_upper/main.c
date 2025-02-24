#include <stdio.h>

int main(){
    char s[] = "hello";
    for(int i = 0; s[i]!= '\0'; ++i){
        printf("%c", (s[i] >= 'a' && s[i]<= 'z')? (s[i] - ' ' ) : s[i]);
    }
    printf("\n");
}