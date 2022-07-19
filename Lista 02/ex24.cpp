//Verifica se um número é primo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, x, z;
	
	printf("Digite um número: ");
	scanf ("%d", &n);
	fflush(stdin);

	for(int x=2; x<n; x++){
		if(n%x==0){
			z++;
		}
	}

	
	if(z==0){
		printf("Esse número é primo");
	}
	else{
		printf("Esse número não é primo");
	}

return 0;
printf("\n");
	system("pause");
}
