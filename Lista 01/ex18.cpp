//Apresenta o volume de um cone VCN = ((3.1416 * R2) / 3) * H
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float R, V, H;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio do cone em cm: ");
	scanf("%f", &R);
	fflush(stdin);
	
	printf("Digite a altura do cone em cm: ");
	scanf("%f", &H);
	fflush(stdin);
	
	V = ((3.1416 * (R*R)) / 3) * H;
		
	printf("O volume desse cone é de %.2f cm cúbicos.", V);
	
	return 0;
	printf("\n");
	system("pause");
}
