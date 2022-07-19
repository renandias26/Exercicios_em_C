//Apresentar os 4 primeiros caracteres de uma palavra
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	char palavra[40], copia[40];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	strncpy(copia, palavra, 4);
	
	printf("Esses são os 4 primeiros caracteres dessa palavra: %s", copia);
	
	return 0;
	printf("\n");
	system("pause");
}
