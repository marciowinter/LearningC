#include <stdio.h>

int main (){
	printf("int %zu bytes\n", sizeof(int));
	printf("short int %zu bytes\n", sizeof(short int));
	printf("int %zu bytes\n", sizeof(long int));
	printf("int %zu bytes\n", sizeof(signed int));
	printf("int %zu bytes\n", sizeof(unsigned int));
	printf("int %zu bytes\n", sizeof(short signed int));
	printf("int %zu bytes\n", sizeof(short unsigned int));
	printf("int %zu bytes\n", sizeof(long signed int));
	printf("int %zu bytes\n", sizeof(long unsigned int));
}
