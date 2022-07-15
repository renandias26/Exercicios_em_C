//Criar um vetor de 21 elementos aleatórios, sem repetir
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int n[6], m[6], o[6], x, y=0, z=0, a, b;

int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	for(x = 0; x < 6; x++){
		n[x] = rand () %20;
	}
	
	for(x = 0; x < 6; x++){
		if (n[x]%2 == 0){
			m[y] = n[x];
			y++;	
		}else{
			o[z] = n[x];
			z++;
		}
		printf("%i ", n[x]);
	}
	
	printf("\n");
	
	for(a = 0; a < y; a++){
		printf("%i ", m[a]);
	}
	
	printf("\n");
	
	for(b = 0; b < z; b++){
		printf("%i ", o[b]);
	}
		
	return 0;
	printf("\n");
	system("pause");
}
