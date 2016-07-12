#include <stdio.h>


int main(){

	char letra1, letra2;
	
	printf("Insira um caractere: ");
	scanf("%c", &letra1);
		
	fflush(stdin);
	__fpurge(stdin);
	
	printf("Insira outro caractere: ");
	scanf("%c", &letra2);
	
	printf("Você digitou: '%c' e '%c'", letra1, letra2);
}