//Mostrar todos os n�meros entre doi n�meros que o usu�rio insere, onde o segundo deve ser maior que o primeiro (WHILE)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n1, n2, i;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	while(n2<=n1){
		printf("Digite um n�mero maior que o primeiro: ");
		scanf("%i", &n2);
		fflush(stdin);	
	}
	
	i=n1;
	
	while(i<=n2){
		printf("%i ", i);
		i++;
	}
	
	return 0;
	printf("\n");
	system("pause");
}
