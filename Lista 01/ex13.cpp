//Apresenta a soma de dois n�meros
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N1, N2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	printf("A soma desses dois n�meros � %.2f.", N1+N2);
	
	return 0;
	printf("\n");
	system("pause");
}
