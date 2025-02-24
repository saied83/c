#include <stdio.h>

int main () {
    int first = 1;
    int val, maxval, minval;
    while (scanf("%d", &val) != EOF){
        if( first || val > maxval) maxval = val;
        if(first || val < minval) minval = val;
        first = 0;
    }
    printf("Maximum value is %d\n", maxval);
    printf("Minimum value is %d\n", minval);
}