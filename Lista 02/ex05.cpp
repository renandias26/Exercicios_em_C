//Solicite (n�mero inteiro) o m�s atual ao usu�rio e apresente o correspondente m�s por extenso.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int m;
	
	printf("Digite o n�mero de um m�s [1-12]: ");
	scanf("%i", &m);
	fflush(stdin);

	while(m<1||m>12){
		system ("cls");
		printf("Digite um n�mero v�lido [1-12] \n");
		printf("Digite o n�mero de um m�s: ");
		scanf("%i", &m);
		fflush(stdin);
	}
	
	switch (m){
		case 1: printf("Esse n�mero corresponde a Janeiro."); break;
		case 2: printf("Esse n�mero corresponde a Fevereiro."); break;
		case 3: printf("Esse n�mero corresponde a Mar�o."); break;
		case 4: printf("Esse n�mero corresponde a Abril."); break;
		case 5: printf("Esse n�mero corresponde a Maio."); break;
		case 6: printf("Esse n�mero corresponde a Junho."); break;
		case 7: printf("Esse n�mero corresponde a Julho."); break;
		case 8: printf("Esse n�mero corresponde a Agosto."); break;
		case 9: printf("Esse n�mero corresponde a Setembro."); break;
		case 10: printf("Esse n�mero corresponde a Outubro."); break;
		case 11: printf("Esse n�mero corresponde a Novembro."); break;
		case 12: printf("Esse n�mero corresponde a Dezembro."); break;
	}
	
	return 0;
	printf("\n");
	system("pause");
}
