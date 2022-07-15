//Solicitar 5 números inteiros, e apresentar quantos deles são negativos
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
	
	printf("Há %i números negativos", z);
	
	return 0;
	printf("\n");
	system("pause");
}
