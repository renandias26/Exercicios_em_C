//Descriptografa o resultado do arquivo Criptografia
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int main (){
	
	char palavra [30];
	char crip [30];
	char c;
	int tam, x, c2, y;
	
	while(x<4 || x>8){
		printf("Digite a palavra criptografada (4 a 8 caracteres): ");
		gets(crip);
		x = strlen(crip);
	}
	
	for (y=0; y<x; y++){
		c = crip[y];
		c2 = c-(x/3+y*7);
		palavra[y] = c2;
	}
	
	palavra[x] = '\0';
	printf("%s", palavra);
		
	return 0;
}
