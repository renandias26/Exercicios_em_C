//Solicite um valor inteiro e apresente a mensagem: NÚMERO PAR ou NÚMERO ÍMPAR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int valor1, valor2;
	
	printf("Digite um valor: ");
	scanf("%i", &valor1);
	fflush(stdin);
	
	printf("Digite mais um valor: ");
	scanf("%i", &valor2);
	fflush(stdin);
	
	if(valor1==valor2){
		printf("Os valores são iguais.");
	}
	else{
		if(valor1>valor2){
			printf("%i é maior que %i", valor1, valor2);
		}
		else{
		printf("%i é maior que %i", valor2, valor1);
	}
	return 0;
	}
	printf("\n");
	system("pause");
}
