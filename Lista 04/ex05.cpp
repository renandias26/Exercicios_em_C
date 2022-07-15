//Ler um vetor de 8 elementos , e preencher outro em ordem inversa
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[8], m[8], x, y;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 8; x++){
		n[x] = rand () %50;
	}

	for(y = 0; y < 8; y++){
		m[y] = n[7-y];
	}

	
	for(y = 0; y < 8; y++){
		printf("%.2i° - %.2i.......%.2i° - %.2i\n", y, m[y], y, n[y]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
