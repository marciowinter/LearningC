#include <stdio.h>

int main(){
	int num1, num2, resultado;
	printf("Digite um número: ");
	scanf("%d", &num1);
	
	printf("Digite outro número: ");
	scanf("%d", &num2);
	
	resultado = num1 + num2;
	
	printf("%d + %d = %d\n", num1, num2, resultado);
}