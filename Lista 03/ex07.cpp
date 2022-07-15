//Apresentar uma palavra toda em maiúscula
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
	
	for(int y=0; y<x ;y++){
		palavra[y]=toupper(palavra[y]);
	}
	
	printf ("%s", palavra);
	
	return 0;
	printf("\n");
	system("pause");
}
