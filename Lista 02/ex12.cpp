//Fazer a m�dia de 10 n�meros - While
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	float c, x, m;
	
	c=0;

	while(c<10){
		printf("Digite um n�mero: ");
		scanf("%f", &x);
		fflush(stdin);
		m=m+x;
		c++;
	}
	
	printf("A m�dia dos n�meros digitados � %f", m/10);
	
	return 0;
	printf("\n");
	system("pause");
}
