//Fazer a m�dia de 10 n�meros - FOR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int x;
	float m, b;

	for(x=1; x<=10; x++){
		printf("Digite um n�mero: ");
		scanf("%f", &b);
		fflush(stdin);
		m=m+b;
	}
	
	m=m/10;
	printf("A m�dia dos n�meros digitados � %f", m);

	return 0;
	printf("\n");
	system("pause");
}
