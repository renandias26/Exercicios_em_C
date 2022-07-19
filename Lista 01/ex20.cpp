//Apresenta o volume de um prisma VPM = L1 * L2 * L3
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float L1, L2, L3;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o tamanho de um lado do prisma em cm: ");
	scanf("%f", &L1);
	fflush(stdin);
	
	printf("Digite o tamanho de outro lado do prisma em cm: ");
	scanf("%f", &L2);
	fflush(stdin);
	
	printf("Digite o tamanho de outro lado do prisma em cm: ");
	scanf("%f", &L3);
	fflush(stdin);
		
	printf("O volume desse prisma é de %.2f cm cúbicos.", L1 * L2 * L3);
	
	return 0;
	printf("\n");
	system("pause");
}
