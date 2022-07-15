//Apresentar os 3 últimos caracteres, de uma palavra com no mínimo 5
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
		printf("Digite uma palavra, com no mínimo, 5 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}
	while (x<5);
	
	for(int y=x-3; y<x; y++){
		printf("%c", palavra[y]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
