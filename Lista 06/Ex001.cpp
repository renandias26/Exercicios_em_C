//Indica se o valor digitado é par ou impar
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
		printf("Esse número é par");
	}else{
		printf("Esse número é impar");
	}
}

float ParImpar(int n1){
	if(n1 % 2 == 0){
		return 0;
	}else{
		return 1;
	}
}
