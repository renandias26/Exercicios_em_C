//Apresentar se uma palavra de no mínimo 3 caracteres é um palíndromo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char palavra[40], copia[40];
	int x, y, z;
	
	do{
		printf("Digite uma palavra com, no mínimo, 3 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}while(x<3);
	
	for(int y=x-1; y>=0 ;y--){
		copia[y]=palavra[(x-1)-y];
	}
	
	copia[x]='\0';
	
	z=strcmp(palavra, copia);
	
	if(z==0){
		printf("Essa palavra é um palídromo.");
	}else{
		printf("Essa palavra não é um palídromo.");
	}
	
	return 0;
	printf("\n");
	system("pause");
}
