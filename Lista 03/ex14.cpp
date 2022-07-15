//Apresentar uma palavra com somente a primeria e a última letra em maiúsculo
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (){
	setlocale (LC_ALL, "portuguese");
	
	char palavra[50];
	int x;
	
	printf ("Digite uma palavra: ");
	gets (palavra);
	
	x=strlen(palavra);
	
	for(int y=0; y<x ;y++){
		if((y==0)||(y=x-1)){
			palavra[y]=toupper(palavra[y]);
		}else{
			palavra[y]=tolower(palavra[y]);
		}
	}
	
	printf ("%s", palavra);
	
	return 0;
	printf("\n");
	system("pause");
}
