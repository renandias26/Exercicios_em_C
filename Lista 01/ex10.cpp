//Apresentar o resultado da fórmula:  D=A+C-B
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float A, B, C, D;
	
	printf("Digite um número: ");
	scanf("%f", &A);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &B);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &C);
	fflush(stdin);
	
	D = A+C-B;
	
	printf("%.2f + %.2f - %.2f = %.2f", A, C, B, D);
	return 0;
	printf("\n");
	system("pause");
}
