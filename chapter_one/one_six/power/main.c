#include <stdio.h>

int power(int n, int t){
int result =1;
for(int i = 0; i < t; ++i){
    result = n * result;
}
return result;
}

int main(){
    printf("%d\t%d\n", power(2, 3), power(3,2));
}