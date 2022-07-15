//Criar um vetor de 14 elementos aleatórios
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[14], x;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 14; x++){
		n[x] = rand () %100;
		printf("%.2i°....%.2i\n", x, n[x]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
