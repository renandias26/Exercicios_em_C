//Produto de dois n�meros sem usar multiplica��o (WHILE)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	int n1, n2, m1, m2, i=2;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Digite mais um n�mero: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	m1=n1+n1;
	m2=n2+n2;
	
	if(n2==0 || n1==0){
		printf("O produto desses n�meros � 0");
	}
	else{
		if(n2==1){
			printf("O produto desses n�meros � %i", n1);
		}
		else{
			if(n1==1){
			printf("O produto desses n�meros � %i", n2);
			}
			else{
				if(n2==2){
				printf("O produto desses n�meros � %i", m1);
				}
				else{
					if(n1==2){
						printf("O produto desses n�meros � %i", m2);
					}
					else{
						if(n1>2){
							while(i<n1){
								m2=m2+n2;
								i++;
							}
							printf("O produto desses n�meros � %i", m2);
						}
						else{
							if(n2>2){
								while(i<n1){
									m2=m2+n2;
									i++;
								}
								printf("O produto desses n�meros � %i", m1);
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
	printf("\n");
	system("pause");
}
