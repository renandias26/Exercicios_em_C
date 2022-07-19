//Apresenta a área de um circulo CAC = 3.1416 * R2.
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float R, A;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio do círculo em cm: ");
	scanf("%f", &R);
	fflush(stdin);
	
	A = 3.1416 * (R*R);
		
	printf("A área desse círculo é de %.2f cm quadrados.", A);
	
	return 0;
	printf("\n");
	system("pause");
}
