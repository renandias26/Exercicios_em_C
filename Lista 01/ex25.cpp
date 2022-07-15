//Multiplicar 3 números inteiros
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	int N1, N2, N3, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%i", &N1);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%i", &N2);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%i", &N3);
	fflush(stdin);
	
	M = N1*N2*N3;
	
	printf("A média dessas notas é %i.", M);
		
	return 0;
	printf("\n");
	system("pause");
}
