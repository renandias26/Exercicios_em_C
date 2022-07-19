//5 prestações
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	float compra;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	fflush(stdin);
	
	printf("1x %.2f\n2x %.2f\n3x %.2f\n4x %.2f\n5x %.2f", (compra), (compra/2), (compra/3), (compra/4), (compra/5));
	
	return 0;
	printf("\n");
	system("pause");
}
