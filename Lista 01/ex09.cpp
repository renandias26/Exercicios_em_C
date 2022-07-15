//Subtrair duas variáveis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	float N1, N2, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	M = N1-N2;
	
	printf("%.2f - %.2f vale %.2f", N1, N2, M);
	return 0;
	printf("\n");
	system("pause");
	}
