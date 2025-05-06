#include <stdio.h>

int main(){
    float fahr, celc;
    float upper, lower, freq;
    lower = -17.8;
    upper = 148.9;
    freq = 20;


    celc = lower;

    printf("%10s\t%10s\n",  "Celsius","Fahrenheit");

    while (celc <=upper)
    {
        fahr = ((celc * 9) / 5) + 32 ;

        printf("%9.1f\t%f\n",  celc,fahr);
        
        celc += freq;
    }
    
}