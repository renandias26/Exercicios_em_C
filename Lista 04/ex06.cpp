//Ler um vetor de 10 elementos , e preencher outro como os valores dobrados, e outro com os valores pela metade
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[10], m[10], o[10], x, y;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 10; x++){
		n[x] = rand () %50;
	}

	for(y = 0; y < 10; y++){
		m[y] = 2*n[y];
	}
	
	for(y = 0; y < 10; y++){
		o[y] = n[y]/2;
	}

	
	for(y = 0; y < 8; y++){
		printf("%.2i°....%.2i    %.2i°....%.2i    %.2i°....%.2i\n", y, n[y], y, m[y], y, o[y]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
