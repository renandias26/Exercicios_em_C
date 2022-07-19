//Somar os números de um vetor de 10 elementos
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	
	int N[10], x, S=0;
	
	for (x = 0; x < 10; x++){
		
		N[x] = rand() %10;
		
		printf("%i-%i\n", x, N[x]);
		
		S = S + N[x];
	}
	
	printf("A soma dos números desse vetor é: %i", S);
	
	return 0;
	printf("\n");
	system("pause");
}
