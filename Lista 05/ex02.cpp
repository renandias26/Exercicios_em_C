//Ler, organizar em ordem crescente e exibir um vetor de 10 nomes
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int x, y, z;
char V1[10][50], tmp[50];

int main () {
	setlocale (LC_ALL, "portuguese");
	srand(time(NULL));
	
	for (x = 0; x < 10; x++){
		printf("Digite um nome: ");
		gets (V1[x]);
	}
	
	for (x = 0; x < 10; x++){
		z = strlen(V1[x]);
		for (y = 0; y < z; y++){
			V1[x][y] = toupper (V1[x][y]);
		}
	}
	
	for (x = 0; x < 9; x++){
		for (y = x+1; y < 10; y++){
			if ((strcmp(V1[x], V1[y])) == 1){
				strcpy (tmp, V1[x]);
				strcpy (V1[x], V1[y]);
				strcpy (V1[y], tmp);
			}
		}
	}

	printf("\n-------------------\n");
	
	for (x = 0; x < 10; x++){
		printf("%s\n", V1[x]);
	}
	
	return 0;
}
