//Apresentar inteiros entre 12 e 25 na horizontal
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int x;
	
	for(x=12; x<=25; x++){
		printf("%i ", x);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
