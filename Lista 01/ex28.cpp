//Apresenta a decima parte da subtra��o de dois n�meros (2 vari�veis)
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
	
	printf("A decima parte de %.2f-%.2f � %.2f.", N1, N2, ((N1-N2)/10));
		
	return 0;
	printf("\n");
	system("pause");
	}
