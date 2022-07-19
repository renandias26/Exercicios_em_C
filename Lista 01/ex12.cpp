//Apresenta 125% de um número
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &N);
	fflush(stdin);
	
	printf("125%% desse valor é %.2f.", N*1.25);
	
	return 0;
	printf("\n");
	system("pause");
}
