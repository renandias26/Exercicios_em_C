//Apresenta o volume de uma esfera VEF = (4/3) * 3.1416) * R3
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float R, V;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio da esfera em cm: ");
	scanf("%f", &R);
	fflush(stdin);
	
	V = ((4/3) * 3.1416) * (R*R*R);
		
	printf("O volume da esfera � de %.2f cm c�bicos.", V);
	
	return 0;
	printf("\n");
	system("pause");
}
