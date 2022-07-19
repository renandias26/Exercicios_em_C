//Apresenta o resultado de Z=(L+A * 2) / C
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float Z, L, A, C;
	
	setlocale (LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &L);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &A);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &C);
	fflush(stdin);
	
	Z=(L+A * 2) / C;
	
	printf("(%.2f+%.2f*2)/%.2f = %.2f", L, A, C, Z);
	
	return 0;
	printf("\n");
	system("pause");
}
