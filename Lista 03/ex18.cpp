//Solicite 4 nomes ao usuário e apresente o menor nome da lista (ordem alfabética)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int cont = 1;
	char nomes[4][50];
	char maiuscNomes[4][50];
	char temp[4];
	
	printf("Digite um nome: ");
	gets(nomes[0]);
	
	
	while (cont <= 3){
		printf("Digite mais um nome: ");
		gets(nomes[cont]);
		cont++;
	}
	
	for(int x=0; x<4; x++){
		for(int y=0; y<strlen(nomes[x]); y++){
			maiuscNomes[x][y] = toupper(nomes[x][y]);
		}
	}
	
	for(int x = 0; x < 4; x++ ){
    	for(int y = x + 1; y < 4; y++ ){
      		if (strcmp(maiuscNomes[x], maiuscNomes[y]) == 1){
         		strcpy(temp, maiuscNomes[x]);
         		strcpy(maiuscNomes[x], maiuscNomes[y]);
         		strcpy(maiuscNomes[y], temp);
         
         		strcpy(temp, nomes[x]);
         		strcpy(nomes[x], nomes[y]);
         		strcpy(nomes[y], temp);
	    	}
    	}
	}
	
	printf("Em ordem alfabética, dentre os nomes digitados o primeiro é %s",nomes[0]);
	
	return 0;
	printf("\n");
	system("pause");
}
