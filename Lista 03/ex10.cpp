//Apresentar uma palavra alternada entre maiúsculo e minúsculo, de 5 a 10 caracteres
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
		printf("Digite uma palavra, com no mínimo, 5 caracteres, e no máximo 10 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}
	while ((x<5)||(x>10));
	
	for(int y=0; y<x; y++){
		if(y%2!=0){
			printf("%c", tolower(palavra[y]));
		}else{
			printf("%c", toupper(palavra[y]));
		}
	}
	
	return 0;
	printf("\n");
	system("pause");
}
