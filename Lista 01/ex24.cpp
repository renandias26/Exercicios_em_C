//Apresenta a soma de 6 n�meros
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N1, N2, N3, N4, N5, N6, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N3);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N4);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N5);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N6);
	fflush(stdin);
	
	M = N1+N2+N3+N4+N5+N6;
	
	printf("A soma desses n�meros � %.2f.", M);
		
	return 0;
	printf("\n");
	system("pause");
}
