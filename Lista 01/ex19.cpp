//Apresenta o volume de uma pir�mide VPD = (L * L) * (H / 3)
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float L, V, H;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o tamanho do lado da pir�mide em cm: ");
	scanf("%f", &L);
	fflush(stdin);
	
	printf("Digite a altura da pir�mide em cm: ");
	scanf("%f", &H);
	fflush(stdin);
	
	V = (L * L) * (H / 3);
		
	printf("O volume dessa pir�mide � de %.2f cm c�bicos.", V);
	
	return 0;
	printf("\n");
	system("pause");
}
