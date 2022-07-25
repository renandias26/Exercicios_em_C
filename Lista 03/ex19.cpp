//Solicite um nome e apresente a quantidade de vogais da mesma;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char nome[50];
	int vogais=0;
	
	printf("Digite um nome: ");
	gets (nome);
	
	for(int x=0; x<strlen(nome); x++){
		if(nome[x] == 'A' || nome[x] == 'E' || nome[x] == 'I' || nome[x] == 'O' || nome[x] == 'U' ||
		nome[x] == 'a' || nome[x] == 'e' || nome[x] == 'i' || nome[x] == 'o' || nome[x] == 'u'){
			vogais++;
		}
	}
	
	printf("Esse nome possui %i vogais", vogais);
	
	return 0;
	printf("\n");
	system("pause");
}
