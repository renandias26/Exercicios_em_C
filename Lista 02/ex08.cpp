//Mostra o maior, o menor e a m�dia de 5 n�meros - sem la�o de repeti��o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	float n1, n2, n3, n4, n5, m;
	
	printf("Digite um n�mero: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &n4);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%f", &n5);
	fflush(stdin);
	
	if((n1>n2)&&(n1>n3)&&(n1>n4)&&(n1>n5)){
		printf("%.2f foi o maior n�mero digitado\n", n1);
	}
	else{
		if((n2>n1)&&(n2>n3)&&(n2>n4)&&(n2>n5)){
			printf("%.2f foi o maior n�mero digitado\n", n2);
		}
		else{
			if((n3>n1)&&(n3>n2)&&(n3>n4)&&(n3>n5)){
				printf("%.2f foi o maior n�mero digitado\n", n3);
			}
			else{
				if((n4>n1)&&(n4>n2)&&(n4>n3)&&(n4>n5)){
					printf("%.2f foi o maior n�mero digitado\n", n4);
				}
				else{
					if((n5>n1)&&(n5>n2)&&(n5>n4)&&(n5>n4)){
						printf("%.2f foi o maior n�mero digitado\n", n5);
					}				
				}		
			}		
		}
	}
	
	if((n1<n2)&&(n1<n3)&&(n1<n4)&&(n1<n5)){
		printf("%.2f foi o menor n�mero digitado\n", n1);
	}
	else{
		if((n2<n1)&&(n2<n3)&&(n2<n4)&&(n2<n5)){
			printf("%.2f foi o menor n�mero digitado\n", n2);
		}
		else{
			if((n3<n1)&&(n3<n2)&&(n3<n4)&&(n3<n5)){
				printf("%.2f foi o menor n�mero digitado\n", n3);
			}
			else{
				if((n4<n1)&&(n4<n2)&&(n4<n3)&&(n4<n5)){
					printf("%.2f foi o menor n�mero digitado\n", n4);
				}
				else{
					if((n5<n1)&&(n5<n2)&&(n5<n4)&&(n5<n4)){
						printf("%.2f foi o menor n�mero digitado\n", n5);
					}				
				}		
			}		
		}
	}
	
	m=(n1+n2+n3+n4+n5)/5;
	
	printf("A m�dia de todos os n�meros digitados � %2.2f", m);
	
	return 0;
	printf("\n");
	system("pause");
}
