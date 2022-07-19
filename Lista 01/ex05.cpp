//Apresenta a metade de uma váriavel
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	float N, M;
	
	setlocale (LC_ALL, "portuguese");
	printf("Digite um número: ");
	scanf("%f", &N);
	M = N/2;
	printf("A metade de %.2f é %.2f", N, M);
	printf("\n");
	system("pause");
}
