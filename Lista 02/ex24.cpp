//Verifica se um n�mero � primo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, x, z;
	
	printf("Digite um n�mero: ");
	scanf ("%d", &n);
	fflush(stdin);

	for(int x=2; x<n; x++){
		if(n%x==0){
			z++;
		}
	}

	
	if(z==0){
		printf("Esse n�mero � primo");
	}
	else{
		printf("Esse n�mero n�o � primo");
	}

return 0;
printf("\n");
	system("pause");
}
