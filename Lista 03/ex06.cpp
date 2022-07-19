//Concatena duas frases em uma terceira variável e apresenta-la
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char palavra1[50], palavra2[50], palavra3[50];
	
	printf("Digite uma frase: ");
	gets(palavra1);
	
	printf("Digite mais uma frase: ");
	gets(palavra2);
	
	strcpy(palavra3, "");
	
	printf("%s \n", palavra3);
	
	strcat(palavra3, palavra1);
	strcat(palavra3, palavra2);
	
	printf("%s", palavra3);
	
	return 0;
	printf("\n");
	system("pause");
}
