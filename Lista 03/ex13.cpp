//Apresentar os valores da tabela ASSCII, mais 20, e a posição de cada letra de uma palavra, de 4 a 12 caracteres
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char palavra[50];
	int x;
	
	do{
		printf("Digite uma palavra, com no mínimo, 4 caracteres, e no máximo 12 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}
	while ((x<4)||(x>12));
	
	for(int y=0; y<x; y++){	
		printf("%c %i\n", palavra[y]+20, y);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
