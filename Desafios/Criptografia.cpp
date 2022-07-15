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
		printf("Digite uma palavra para ser criptografada (4 a 8 caracteres): ");
		gets(palavra);
		x = strlen(palavra);
	}
	
	for (y=0; y<x; y++){
		c = palavra[y];
		c2 = c+(x/3+y*7);
		crip[y] = c2;
	}
	
	crip[x] = '\0';
	printf("%s", crip);
		
	return 0;
}
