//Solicite uma frase e apresente a quantidade de palavras existentes
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char frase[50]; 

int ContaPalavra (char* a);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite uma frase: ");
	gets(frase);
	printf("Essa frase possui %i palavras", ContaPalavra(frase));
	
}

int ContaPalavra (char* a){
	char maiusc [50];
	int NumPalavra, TamPalavra;
	
	TamPalavra = strlen(a);
	for(int x = 0; x < TamPalavra; x++){
	maiusc[x] = toupper(a[x]);
	}
	
	while(maiusc[0] < 65 || maiusc[0] > 90){
		printf("O primeiro caracter precisa ser uma letra\nDigite uma frase válida: ");
		gets(a);
		TamPalavra = strlen(a);
		for(int x = 0; x < TamPalavra; x++){
		maiusc[x] = toupper(a[x]);
		}
	}
	
	if(maiusc[TamPalavra - 1] >= 65 && maiusc[TamPalavra - 1] <= 90){
		maiusc[TamPalavra] = 46;
		maiusc[TamPalavra + 1] = '\0';
	}
	
	for(int x = 0; x < TamPalavra; x++){
		if(maiusc[x] >= 65 && maiusc[x] <= 90){
			if(maiusc[x+1] == 32 || maiusc [x+1] == 46){
				NumPalavra++;
			}
		}
	}
	return NumPalavra;
}
