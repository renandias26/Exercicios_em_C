//Solicitar 5 n�meros inteiros, e apresentar quantos deles s�o negativos
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[5], x, y, z=0;

int main () {
	setlocale(LC_ALL, "portuguese");
	
	for (x = 0; x < 5; x++){
		printf("Digite um valor inteiro: ");
		scanf("%i", &y);
		n[x] = y;
	}
	
	for (x = 0; x < 5; x++){
		if (n[x] < 0){
			z++;
		}
	}
	
	printf("H� %i n�meros negativos", z);
	
	return 0;
	printf("\n");
	system("pause");
}
