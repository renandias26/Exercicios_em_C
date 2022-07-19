//Solicite um valor inteiro e apresente a mensagem: NÚMERO PAR ou NÚMERO ÍMPAR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &x);
	fflush(stdin);
	
	if (x%2==0){
		printf("Esse número é par!");
}
			else{
				printf("Esse número é impar!");
			}

	
	return 0;
	printf("\n");
	system("pause");
}
