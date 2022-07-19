//Apresenta o volume de um circulo CVC = (3.1416 * R2) * H
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float R, V, H;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio do cinlindro em cm: ");
	scanf("%f", &R);
	fflush(stdin);
	
	printf("Digite a altura do cilindro em cm: ");
	scanf("%f", &H);
	fflush(stdin);
	
	V = (3.1416 * (R*R)) * H;
		
	printf("O volume desse circulo é de %.2f cm cúbicos.", V);
	
	return 0;
	printf("\n");
	system("pause");
}
