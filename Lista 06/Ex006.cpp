//Solicite um nome e apresente a quantidade de vogais
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char nome[50];
char maiusculo[50];
int vogais;

char TransformarMaiusculo(char a);
bool NumeroDeVogais(char b);

int main(){
	printf("Digite um nome: ");
	gets(nome);
	for(int x = 0; x < strlen(nome); x++){
		maiusculo[x] = TransformarMaiusculo(nome[x]);
		if (NumeroDeVogais(maiusculo[x])){
			vogais++;
		}
	}
	printf("Esse nome possui %i vogais", vogais);
}

char TransformarMaiusculo(char a){
	return toupper(a);
}

bool NumeroDeVogais(char b){
	bool vogal = false;
	if (b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U'){
		vogal = true;
	}
	return vogal;
}
