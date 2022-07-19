//Apresentar os valores da tabela ASSCII, mais 10, de cada letra de uma palavra, de 3 a 20 caracteres
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
		printf("Digite uma palavra, com no mínimo, 3 caracteres, e no máximo 20 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}
	while ((x<3)||(x>20));
	
	for(int y=0; y<x; y++){	
		printf("%c", palavra[y]+10);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
