//Programa para encontrar o valor de um carácter na table ASCII
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.c>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	char tecla;
	
	printf("Tecle o caractér desejado: ");
	scanf("%c", &tecla);
	printf("Na tabela ASCII, essa carácter vale %i", tecla);
	
}
