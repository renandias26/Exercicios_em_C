//Indica se o valor digitado � par ou impar
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float x;

float ParImpar(int n1);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%i", &x);
	if(ParImpar(x) == 0){
		printf("Esse n�mero � par");
	}else{
		printf("Esse n�mero � impar");
	}
}

float ParImpar(int n1){
	if(n1 % 2 == 0){
		return 0;
	}else{
		return 1;
	}
}
