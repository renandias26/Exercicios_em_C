//Mostra se um n�mero est� entre 50 e 100
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	fflush (stdin);
	
	if((n>50)&&(n<100)){
		printf("O n�mero digitado est� entre 50 e 100");
	}
	else{
		printf("O n�mero digitado n�o est� entre 50 e 100");
	}

	return 0;
	printf("\n");
	system("pause");
}
