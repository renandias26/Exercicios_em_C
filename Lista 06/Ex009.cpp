/*Elaborar um programa que possua uma sub-rotina que efetue e permita apresentar o
somatório dos N primeiros números inteiros, definidos por um operador (1+2+3+4+...+N).*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int numero;

int Soma_Ate(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um número: ");
	scanf("%i", &numero);
	Soma_Ate(numero);
}

int Soma_Ate(int n){
	int soma = 0;
	for(int x = 1; x <= n; x++){
		soma += x;
	}
	return printf("Somando todos os inteiros positivos até %i o resultado é: %i",numero, soma);
}
