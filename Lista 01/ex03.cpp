//Apresenta o dobro de uma vari�vel
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	float N, M;
	setlocale(LC_ALL, "portuguese");
	printf("Digite um n�mero: ");
	scanf("%f", &N);
	M = N*2;
	printf("O dobro de %.2f � %.2f", N, M);
	printf("\n");
	system("pause");
}
