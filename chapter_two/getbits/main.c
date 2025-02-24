#include <stdio.h>


unsigned getbits(x, p, n)
unsigned x, p, n ;{
    return ((x >> (p+1-n)) & ~(~0 << n));
}


int main() {
    unsigned x = 0b11011010; 
    unsigned result =   getbits(x, 4, 3); 
    printf("%08b\n",  result);
    return 0;
}


