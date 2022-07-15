//Apresenta a quantia de caracteres de uma string
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	char palavra [40];
	int quantia;
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	quantia = strlen(palavra);
	
	printf("Essa palavra tem %i caracteres.", quantia);
	
	
	return 0;
	printf("\n");
	system("pause");
}
