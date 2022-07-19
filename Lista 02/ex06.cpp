//Solicite o nome e a idade de 2 pessoas. Posteriormente, apresente o NOME da pessoa mais velha,
//seguida de uma frase “é a mais velha”, ou a mensagem “As pessoas possuem a mesma idade”
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int idade1, idade2;
	char nome1[50], nome2[50];

	printf("Digite o nome de uma pessoa: ");
	gets(nome1);
	fflush(stdin);
	printf("Digite a idade dele(a): ");
	scanf("%i", &idade1);
	fflush(stdin);
	
	system("cls");
	
	printf("Digite o nome da outra pessoa: ");
	gets(nome2);
	fflush(stdin);
	printf("Digite a idade dele(a): ");
	scanf("%i", &idade2);
	fflush(stdin);
	
	system("cls");
	
	if(idade1==idade2){
		printf("%s e %s tem a mesma idade.", nome1, nome2);
	}
	else{
		if(idade1>idade2){
			printf("%s é %i anos mais velho(a) que %s.", nome1, (idade1-idade2), nome2);
		}
		else{
			printf("%s é %i anos mais velho(a) que %s.", nome2, (idade2-idade1), nome1);
		}
	}

	return 0;
	printf("\n");
	system("pause");
}
