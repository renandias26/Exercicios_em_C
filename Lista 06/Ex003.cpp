//Solicite um valor e apresente o fatorial
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int n1;

int Fatorial(int x);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%i", &n1);
	printf("O fatorial de %i é %i", n1, Fatorial(n1));
}

int Fatorial(int x){
	int resultado;
	if(x == 0 || x == 1){
		return 1;
	} else{
		resultado = x;
		for(int a=(x-1); a>0; a--){
			resultado = resultado * a ;
		}
	}
	return resultado;
}
