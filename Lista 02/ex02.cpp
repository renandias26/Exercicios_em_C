//Solicite 3 notas, calcule a m�dia e apresente se o aluno est� APROVADO ou REPROVADO,
//considerando m�dia m�nima 6,0 para aprova��o.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	float n1, n2, n3, m;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	m = (n1+n2+n3)/3;
	
	if (m>=6.0){
		printf("Voc� est� aprovado!");
	}
			else{
				printf("Voc� est� reprovado!");
			}
	
	return 0;
	printf("\n");
	system("pause");
}
