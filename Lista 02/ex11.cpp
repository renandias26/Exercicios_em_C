//Fazer a média de 10 números - DO/While
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	float c, x, m;
	
	c=0;

	do{
		printf("Digite um número: ");
		scanf("%f", &x);
		fflush(stdin);
		m=m+x;
		c++;
	}
	while (c<10);
	
	printf("A média dos números digitados é %f", m/10);
	
	return 0;
	printf("\n");
	system("pause");
}
