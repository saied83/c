#include <stdio.h>

int main() {
    int nameArry[20] = {0};  // Initialize all to 0
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {  // Fix: && instead of ||
            ++nameArry[c - '0'];
        }
    }

    for (int i = 0; i < 10; ++i) {  // Only 0-9 are valid digits
        printf("Digit %d appeared %d times\n", i, nameArry[i]);
    }
}
