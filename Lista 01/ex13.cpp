//Apresenta a soma de dois números
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N1, N2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um número: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	printf("A soma desses dois números é %.2f.", N1+N2);
	
	return 0;
	printf("\n");
	system("pause");
}
