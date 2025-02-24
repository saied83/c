#include <stdio.h>
#include <string.h>

int getLengthOfString (s)
char s[];
{   
    int length = 0;
    while (s[length] != '\0') length++;
    return --length;

}

int exponent(a, n)
int a, n;
{
    int result = 1;
    for(int i = 0; i<n; i++) result = result * a;
    return result;
}

int htoi(s)
char s[];
{
    int lenght = getLengthOfString(s);
    int result = 0;
    int i =0;
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9'){
            result = result + ((s[i] - '0') * exponent(16, lenght - i));
        }else if(s[i] >= 'a' && s[i] <= 'f'){
            result = result + (((s[i] - 'a') + 10) * exponent(16, lenght - i));
        }else {
            result = result + (((s[i] - 'A') + 10) * exponent(16, lenght - i));
        }
        ++i;
    }
    return result;

}



int main(){
    char s[10];
    strcat(s, "abCF102");
    int result = htoi(s);
    printf("Integer of %s is: %d\n", s, result);

}