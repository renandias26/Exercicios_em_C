//Apresenta a média de 3 notas
#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main (){
	
	float N1, N2, N3, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &N1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &N2);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &N3);
	fflush(stdin);
	
	M = (N1+N2+N3)/3;
	
	printf("A média dessas notas é %.2f.", M);
		
	return 0;
	printf("\n");
	system("pause");
}
