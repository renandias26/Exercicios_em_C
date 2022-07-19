//Apresentar uma palavra invertida
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (){
	setlocale (LC_ALL, "portuguese");
	
	char palavra[50];
	int x;
	
	printf ("Digite uma palavra: ");
	gets (palavra);
	
	x=strlen(palavra);
	
	for(int y=x-1; y>=0 ;y--){
		printf("%c", palavra[y]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
