//Apresentar os valores da tabela ASSCII de cada letra de uma palavra, de 4 a 15 caracteres
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
		printf("Digite uma palavra, com no mínimo, 4 caracteres, e no máximo 15 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}
	while ((x<4)||(x>15));
	
	for(int y=0; y<x; y++){	
		printf("%c %i \n", palavra[y], palavra[y]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
