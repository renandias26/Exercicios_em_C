//Apresenta a metade de uma v�riavel
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	float N, M;
	
	setlocale (LC_ALL, "portuguese");
	printf("Digite um n�mero: ");
	scanf("%f", &N);
	M = N/2;
	printf("A metade de %.2f � %.2f", N, M);
	printf("\n");
	system("pause");
}
