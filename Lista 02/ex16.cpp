//Mostrar todos os n�meros entre doi n�meros que o usu�rio insere, onde o segundo deve ser maior que o primeiro (FOR)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n1, n2, i;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	for(n2=0;n2<=n1;){
		printf("Digite um n�mero maior que o primeiro: ");
		scanf("%i", &n2);
		fflush(stdin);
	}
	
	for(i=n1; i<=n2; i++){
		printf("%i ", i);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
