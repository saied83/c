#include <stdio.h>

int main(){
    float fahr, celc;
    float upper, lower, freq;
    lower = 0;
    upper = 300;
    freq = 20;

    fahr = lower;

    printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
  

    while (fahr <=upper)
    {
        celc = 5 *(fahr - 32) / 9;
  
        printf("%3.0f\t%9.1f\n", fahr, celc);
        
        fahr += freq;
    }
    
}