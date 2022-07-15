//Ler, organizar em ordem crescente e exibir um vetor de 10 elementos
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int V1[10], x, y, tmp;

int main () {
	setlocale (LC_ALL, "portuguese");
	srand(time(NULL));
	
	for (x = 0; x < 10; x++){
		V1[x] = rand () %100;
		printf("%i\n", V1[x]);
	}
	
	for (x = 0; x < 9; x++){
		for (y = x+1; y < 10; y++){
			if (V1[y] < V1[x]){
				tmp = V1[x];
				V1[x] = V1[y];
				V1[y] = tmp;
			}
		}
	}
	
	printf("\n-------------------\n");
	
	for (x = 0; x < 10; x++){
		printf("%i\n", V1[x]);
	}
	
	return 0;
}
