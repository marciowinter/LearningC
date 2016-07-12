#include <stdio.h>

int main(){
	
	int num1, num2, diff;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
		
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	
	diff = num1 - num2;
	
	printf("%d - %d = %d", num1,num2,diff);	
}