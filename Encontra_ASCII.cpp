//Programa para encontrar o valor de um car�cter na table ASCII
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.c>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	char tecla;
	
	printf("Tecle o caract�r desejado: ");
	scanf("%c", &tecla);
	printf("Na tabela ASCII, essa car�cter vale %i", tecla);
	
}
