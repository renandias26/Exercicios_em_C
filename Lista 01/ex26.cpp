//Informado 3 números, apresente a soma do primeiro com o terceiro, multiplicando pelo segundo.
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N1, N2, N3, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &N3);
	fflush(stdin);
	
	M = (N1+N3)*N2;
	
	printf("(%.2f + %.2f) * %.2f = %.2f.", N1, N3, N2, M);
		
	return 0;
	printf("\n");
	system("pause");
	}
