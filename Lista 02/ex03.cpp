//M�dia de duas notas + Solicita��o de substitutiva e inclus�o da mesma
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	float n1, n2, m, sub;
	char r;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	m = (n1+n2)/2;
	printf("Sua m�dia � de %.2f \n", m);
	
	if (m>=6.0){
		printf("Voc� est� aprovado! \n");
	}
	else{
		printf("Voc� est� reprovado! \n");
	}
	printf("Deseja fazer a prova substitutiva (S/N): ");
	scanf("%c", &r);
	fflush(stdin);
	system("cls");
	
	if (r=='S'||r=='s'){
		printf("Digite a nota da prova substitutiva: ");
		scanf("%f",&sub);
		fflush(stdin);
		
		if(n1<n2){
			n1 = sub;
		}
		else{
			n2 = sub;
		}
		
		m = (n1+n2)/2;
		
		printf("Suas novas notas s�o: \n 1�nota: %.2f \n 2�nota: %.2f \n  M�dia: %.2f \n", n1, n2, m);
		
		if (m>=6.0){
			printf("Voc� est� aprovado!");
		}
		else{
			printf("Voc� est� reprovado!");
		}
	}
	
	return 0;
	printf("\n");
	system("pause");
}
