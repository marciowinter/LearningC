#include <stdio.h>

int main(){
	
	char letra1, letra2; 
	
	printf("Insira um caractere: \n");
	letra1 = fgetc(stdin);
	
	printf("Insira outro caractere: ");
	letra2 = fgetc(stdin);
	
	printf("Você digitou: '%c' e '%c'\n", letra1, letra2);
}