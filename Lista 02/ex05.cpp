//Solicite (número inteiro) o mês atual ao usuário e apresente o correspondente mês por extenso.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int m;
	
	printf("Digite o número de um mês [1-12]: ");
	scanf("%i", &m);
	fflush(stdin);

	while(m<1||m>12){
		system ("cls");
		printf("Digite um número válido [1-12] \n");
		printf("Digite o número de um mês: ");
		scanf("%i", &m);
		fflush(stdin);
	}
	
	switch (m){
		case 1: printf("Esse número corresponde a Janeiro."); break;
		case 2: printf("Esse número corresponde a Fevereiro."); break;
		case 3: printf("Esse número corresponde a Março."); break;
		case 4: printf("Esse número corresponde a Abril."); break;
		case 5: printf("Esse número corresponde a Maio."); break;
		case 6: printf("Esse número corresponde a Junho."); break;
		case 7: printf("Esse número corresponde a Julho."); break;
		case 8: printf("Esse número corresponde a Agosto."); break;
		case 9: printf("Esse número corresponde a Setembro."); break;
		case 10: printf("Esse número corresponde a Outubro."); break;
		case 11: printf("Esse número corresponde a Novembro."); break;
		case 12: printf("Esse número corresponde a Dezembro."); break;
	}
	
	return 0;
	printf("\n");
	system("pause");
}
