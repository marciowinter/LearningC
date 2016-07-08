#include <stdio.h>

/*
Podemos colocar vários números inteiros representados por %d dentro das aspas, e seus valores serão os que vem após a vírgula, na mesma ordem.
Por exemplo, um programa em C que imprima "Eu nasci em 2112, no dia 21 do mes 12":
*/

int main(){
	printf("Eu nasci no ano %d, no dia %d do mes %d", 2112, 21, 12);
}
