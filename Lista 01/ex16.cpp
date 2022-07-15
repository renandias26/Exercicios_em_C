//Apresenta o perímetro de um circulo CPC = 3.1416 * D (D=R+R)
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float R, P;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio do círculo em cm: ");
	scanf("%f", &R);
	fflush(stdin);
	
	P = 3.1416 * (R+R);
		
	printf("O perímetro desse círculo é de %.2f cm.", P);
	
	return 0;
	printf("\n");
	system("pause");
}
