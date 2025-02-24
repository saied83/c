#include <stdio.h>

int main() {
    unsigned int x = 5;
    
    printf("Original: %u\n", x);
    printf("Left shift by 1: %u\n", x << 1); // 5 * 2
    printf("Left shift by 2: %08b\n", (unsigned char)x<<2); // 5 * 4
    return 0;
}
