//Solicite um valor inteiro e apresente a mensagem: N�MERO PAR ou N�MERO �MPAR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &x);
	fflush(stdin);
	
	if (x%2==0){
		printf("Esse n�mero � par!");
}
			else{
				printf("Esse n�mero � impar!");
			}

	
	return 0;
	printf("\n");
	system("pause");
}
