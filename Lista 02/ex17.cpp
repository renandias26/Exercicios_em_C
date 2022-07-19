//Mostrar todos os números entre doi números que o usuário insere, onde o segundo deve ser maior que o primeiro (DO/WHILE)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n1, n2, i;
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	do{
		printf("Digite um número maior que o primeiro: ");
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
