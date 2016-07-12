#include <stdio.h>

int main(){
	double num1, num2, resultado;
	printf("Digite o primeiro número: ");
	scanf("%lf", &num1);
	
	printf("Digite outro numero: ");
	scanf("%lf", &num2);
	
	resultado = num1 / num2;
	
	printf("%.1lf / %.1lf = %.3lf\n", num1,num2,resultado);
}