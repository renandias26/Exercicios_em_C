//Apresentar do último ao primeiro um vetor de 21 elementos numéricos
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[21], x;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 21; x++){
		n[x] = rand () %50;
	}
	
	for(x = 20; x >= 0; x--){
		printf("%.2i° - %i\n", x, n[x]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
