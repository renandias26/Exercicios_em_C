//Organizar em outro vetor, um vetor de 10 elementos aleatórios de 10 à 100n
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int V1[10], V2[10], x, y, tmp;

int main () {
	setlocale (LC_ALL, "portuguese");
	srand(time(NULL));
	
	for (x = 0; x < 10; x++){
		V1[x] =(rand () %91) + 10;
	}
	
	for (x = 0; x < 10; x++){
		V2[x] = V1[x];
	}
	
	for (x = 0; x < 9; x++){
		for (y = x+1; y < 10; y++){
			if (V2[y] < V2[x]){
				tmp = V2[x];
				V2[x] = V2[y];
				V2[y] = tmp;
			}
		}
	}
	
	printf("\n-------------------\n");
	
	for (x = 0; x < 10; x++){
		printf("%i- %.2i....%.2i\n", x, V1[x], V2[x]);
	}
	
	return 0;
}
