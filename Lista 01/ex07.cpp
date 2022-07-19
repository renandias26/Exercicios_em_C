//Apresenta 60% de uma variável
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	float N, M;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%f", &N);
	fflush(stdin);
	M = N*0.6;
	printf("60%% de %.2f é %.2f.", N, M);
	return 0;
	printf("\n");
	system("pause");
}
