//Multiplicar 3 n�meros inteiros
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	int N1, N2, N3, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%i", &N1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%i", &N2);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%i", &N3);
	fflush(stdin);
	
	M = N1*N2*N3;
	
	printf("A m�dia dessas notas � %i.", M);
		
	return 0;
	printf("\n");
	system("pause");
}
