//Reajuste de salário
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int   idade;
	char  sexo, nome[50];
	float salario;
		
	while ((sexo !='M')&&(sexo !='m')&&(sexo !='F')&&(sexo !='f')){		
		printf("Digite seu sexo [M/F]: ");
		scanf("%c", &sexo);
		fflush(stdin);
	}
	
	printf("Digite seu nome: ");
	gets(nome);
	fflush(stdin);

	printf("Digite sua idade: ");
	scanf("%i", &idade);
	fflush(stdin);
	
	printf("Digite seu salário [R$]: ");
	scanf("%f", &salario);
	fflush(stdin);

	if(idade>50){
		printf("\nSeu novo salário é de R$%.2f", (salario*1.35));
	}
	else{
		if(sexo=='F'||sexo=='f'){
			if(idade<=24){
				printf("\nSeu novo salário é de R$%.2f", (salario*1.18));
			}
			else{
				if((idade>24)&&(idade<=50)){
					printf("\nSeu novo salário é de R$%.2f", (salario*1.23));
				}
			}
		}
		else{
			if(idade<=24){
				printf("\nSeu novo salário é de R$%.2f", (salario*1.175));
			}
			else{
				if((idade>24)&&(idade<=38)){
					printf("\nSeu novo salário é de R$%.2f", (salario*1.21));
				}
				else{
					if((idade>38)&&(idade<=50)){
						printf("\nSeu novo salário é de R$%.2f", (salario*1.23));
					}
				}
			}
		}
	}
	return 0;
	printf("\n");
	system("pause");
}
