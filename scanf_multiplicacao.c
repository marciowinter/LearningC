#include <stdio.h>

int main(){
	float num1, num2, resultado;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite outro número: ");
	scanf("%f", &num2);
	
	resultado = num1 * num2;
	
	printf("%.1f + %.1f = %.2f\n", num1,num2,resultado);
}