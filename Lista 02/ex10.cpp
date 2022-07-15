//Fazer a média de 10 números - FOR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int x;
	float m, b;

	for(x=1; x<=10; x++){
		printf("Digite um número: ");
		scanf("%f", &b);
		fflush(stdin);
		m=m+b;
	}
	
	m=m/10;
	printf("A média dos números digitados é %f", m);

	return 0;
	printf("\n");
	system("pause");
}
