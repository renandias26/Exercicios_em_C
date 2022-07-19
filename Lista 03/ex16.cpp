//Apresentar duas palavras em ordem alfabética
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char palavra1[50], palavra2[50];
	int x;

	printf("Digite uma palavra: ");
	gets(palavra1);
	
	printf("Digite mais uma palavra: ");
	gets(palavra2);
	
	x=strcmp(palavra1, palavra2);

	if(x==-1){
		printf("%s\n%s", palavra1, palavra2);
	}else{
		printf("%s\n%s", palavra2, palavra1);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
