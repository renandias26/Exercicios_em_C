//Apresenta 125% de um n�mero
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &N);
	fflush(stdin);
	
	printf("125%% desse valor � %.2f.", N*1.25);
	
	return 0;
	printf("\n");
	system("pause");
}
