#include <stdio.h>

int main (){
    char line[1000];
    printf("Enter an line\n");
    // scanf("%[^\n]1000s", line);
    fgets(line, 1000, stdin);
    printf("Line : %s\n", line);

}