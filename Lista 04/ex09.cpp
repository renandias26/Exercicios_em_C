//Criar um vetor de 21 elementos aleatórios, sem repetir
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[21], x, y, a, b;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 21; x++){
	//	while (n[x] == '');
		a = rand () %20;
		b = 0;
	for (y = 0; y < 21; y++){
			if (n[y] == a){
				b++;
			}
			if (b == 0){
				n[x] = a;
			}
		}
		printf("%.2i...%.2i\n", x, n[x]);
	}
	
	printf("%n", a);
	
	return 0;
	printf("\n");
	system("pause");
}
