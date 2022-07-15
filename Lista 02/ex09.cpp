//Mostra se um número está entre 50 e 100
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	fflush (stdin);
	
	if((n>50)&&(n<100)){
		printf("O número digitado está entre 50 e 100");
	}
	else{
		printf("O número digitado não está entre 50 e 100");
	}

	return 0;
	printf("\n");
	system("pause");
}
