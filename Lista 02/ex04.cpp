//Solicite um valor inteiro e apresente a mensagem: N�MERO PAR ou N�MERO �MPAR
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
		printf("Os valores s�o iguais.");
	}
	else{
		if(valor1>valor2){
			printf("%i � maior que %i", valor1, valor2);
		}
		else{
		printf("%i � maior que %i", valor2, valor1);
	}
	return 0;
	}
	printf("\n");
	system("pause");
}
