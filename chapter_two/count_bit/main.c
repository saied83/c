#include <stdio.h>

int main(){
	int number = 0b01010101011;
	int count = 0;
	while(number){
		number  >> =  1;
		++count;
		
	}
	printf("%d", count);
	return 0;
}
