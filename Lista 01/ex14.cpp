//Apresenta a área de um triângulo AREA = (BASE x ALTURA) / 2.
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float B, H, A;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o tamanho da base do triângulo em cm: ");
	scanf("%f", &B);
	fflush(stdin);
	
	printf("Digite a altura do triângulo em cm: ");
	scanf("%f", &H);
	fflush(stdin);	
	
	A = (B*H)/2;
	
	printf("A área desse triângulo é de %.2f cm quadrados.", A);
	return 0;
	printf("\n");
	system("pause");
}
