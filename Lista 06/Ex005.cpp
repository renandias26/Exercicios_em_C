//Solicite um valor e retorne se o mesmo � ou n�o PRIMO
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int n1;

bool VerificaNumPrimo(int a);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%i", &n1);
	if(VerificaNumPrimo(n1) == true){
		printf("Esse n�mero � primo.");
	}else{
		printf("Esse n�mero n�o � primo.");
	}
}

bool VerificaNumPrimo(int a){
	int cont;
	for (int x = 2; x<=a; x++){
		if(a % x == 0){
			cont++;
		}
	}
	if(cont == 1){
		return true;
	}else{
		return false;
	}
}
