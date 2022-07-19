//Apresentar a média da idade de 7 pessoas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int i[7], x, m=0;

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a idade de uma pessoa: ");
	scanf("%i", &i[0]);
	m = i[0];
	
	for(x = 1; x < 7; x++){
		printf("Digite a idade de outra pessoa: ");
		scanf("%i", &i[x]);
		m = m + i[x];
	}
	
	printf("A média dessas idades é: %i", m/7);
	
	
	return 0;
	printf("\n");
	system("pause");
}
