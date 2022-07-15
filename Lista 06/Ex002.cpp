//Solicite um dois valores e apresente a multiplicação de um pelo outro sem usar *
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float n1, n2;

float Multiplica_2(float a, float b);

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%f", &n1);
	printf("Digite mais um valor: ");
	scanf("%f", &n2);
	printf("%.2f vezes %.2f resulta em %.2f", n1, n2, Multiplica_2(n1, n2));
}

float Multiplica_2(float a, float b){
	return a*b;
}
