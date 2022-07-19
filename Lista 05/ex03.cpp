//Ler, organizar em ordem decrescente e exibir um vetor de 23 numeros aleatórios
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int V1[23], x, y, tmp;

int main () {
	setlocale (LC_ALL, "portuguese");
	srand(time(NULL));
	
	for (x = 0; x < 23; x++){
		V1[x] =rand () %100;
		printf("%i\n", V1[x]);
	}
	
	for (x = 0; x < 22; x++){
		for (y = x+1; y < 23; y++){
			if (V1[y] < V1[x]){
				tmp = V1[x];
				V1[x] = V1[y];
				V1[y] = tmp;
			}
		}
	}
	
	printf("\n-------------------\n");
	
	for (x = 23; x >= 0; x--){
		printf("%i\n", V1[x]);
	}
	
	return 0;
}
