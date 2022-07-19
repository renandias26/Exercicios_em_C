//Apresentar do último ao primeiro um vetor de 15 elementos numéricos
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[15], x;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 15; x++){
		n[x] = rand () %50;
	}
	
	for(x = 14; x >= 0; x--){
		printf("%.2i° - %i\n", x, n[x]);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
