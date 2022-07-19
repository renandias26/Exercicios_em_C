//Apresentar 3 caracteres a partir do segundo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char palavra[40], copia[40];
	int x, y;
	
	do{
		printf("Digite uma palavra com, no mínimo, 4 caracteres: ");
		gets(palavra);
		x=strlen(palavra);
	}while(x<4);
	
	for(y=1; y<=3; y++){
		copia[y-1]=palavra[y];
	}
	
	copia[3]='\0';
	
	printf("%s", copia);
	
	return 0;
	printf("\n");
	system("pause");
}
