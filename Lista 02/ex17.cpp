//Mostrar todos os n�meros entre doi n�meros que o usu�rio insere, onde o segundo deve ser maior que o primeiro (DO/WHILE)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n1, n2, i;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	do{
		printf("Digite um n�mero maior que o primeiro: ");
		scanf("%i", &n2);
		fflush(stdin);	
	}
	while(n2<=n1);
	
	i=n1;
	
	do{
		printf("%i ", i);
		i++;
	}
	while(i<=n2);
	
	return 0;
	printf("\n");
	system("pause");
}
