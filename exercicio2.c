#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int main(){
	
	char nome[20], end[21], tel[15], cep[10];
		
	// Nome
	printf("Digite seu nome: \n");                           
	gets(nome);						
											
	fflush(stdin);						
    __fpurge(stdin);
	
	// Endereço
	printf("Digite seu endereço: \n");
	gets(end);										 
	
	fflush(stdin);
    __fpurge(stdin);
		
	// CEP
	printf("Digite seu CEP: \n");
	gets(cep);
	
	fflush(stdin);
    __fpurge(stdin);
	
	// Telefone
	printf("Digite seu telefone: \n");
	gets(tel);
	
	fflush(stdin);
    __fpurge(stdin);
	
	printf("Nome: %s \n", nome);		
	printf("Endereço: %s \n", end);
	printf("O CEP é %s e o telefone é %s: \n", cep, tel);

}