//Apresenta 45% da soma de dois n�meros
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float N1, N2, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	M = (N1+N2)*0.45;
	
	printf("45%% da soma desses n�meros � %.2f.", M);
	return 0;
	printf("\n");
	system("pause");
}
