//Soma de um numero entre 10 e 50, com um n�mero no min 15 unidades maior que o primeiro
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int a, b;
	
	do{
		printf("Digite um n�mero entre 10 e 50: ");
		scanf("%i", &a);
		fflush(stdin);
	}
	while((a<10)||(a>50));
	
	do{
		printf("Digite um n�mero maior que o anterior (no m�nimo 15 unidades): ");
		scanf("%i", &b);
		fflush(stdin);
	}
	while(b<a+15);
	
	printf("A soma desses n�meros vale %i", (a+b));

	return 0;
	printf("\n");
	system("pause");
}
