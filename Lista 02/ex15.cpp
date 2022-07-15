//Apresentar inteiros entre 14 e 30 na vertical
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int x;
	
	for(x=14; x<=30; x++){
		printf("%i\n", x);
	}
	
	return 0;
	printf("\n");
	system("pause");
}
