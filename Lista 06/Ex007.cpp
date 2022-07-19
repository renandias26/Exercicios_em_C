//Solicite um nome e apresente o mesmo como referência bibliográfica (mínimo 25)
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char NomeDigitado[100]; 
char maiusc[100];
char NomeSeparado[50][100];

void TransformaMaiusculo(char* palavra);
bool ValidaNome(char* caracter);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite uma nome: ");
	gets(NomeDigitado);
	TransformaMaiusculo(NomeDigitado);
	ValidaNome(maiusc);
	while(ValidaNome(maiusc) == false){
		printf("O nome deve conter apenas letras e espaços (o primeiro caracter não pode ser espaço)\nDigite um nome válido: ");
		gets(NomeDigitado);
		TransformaMaiusculo(NomeDigitado);
		ValidaNome(maiusc);
	}
	
}

void TransformaMaiusculo(char* palavra){
	for(int x = 0; x < strlen(palavra); x++){
		maiusc[x] = toupper(palavra[x]);
		maiusc[strlen(palavra)] = '\0';
	}
}

bool ValidaNome(char* caracter){
	bool verifica = false;
	int ContaValido = 0;
	
	if(caracter[0] != 32){
		for(int x = 0; x < strlen(caracter); x++){
			if(caracter[x] == 32 || (caracter[x] >= 65 && caracter[x] <= 90)){
				ContaValido++;
			}
		}			
	}

	if(ContaValido == strlen(caracter)){
		verifica = true;
	}
	
	return verifica;
}


int ContaPalavra (char* nome){

	

}
