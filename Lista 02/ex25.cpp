//Mostra os números primos de 1 à 500
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, x, z;

	for(int n=1; n<=500; n++){
		for(int x=1; x<=n; x++){
			if(n%x==0){
				z++;
			}
		}
		if(z==2){
			printf("%i é primo\n", n);
		}
		z=0;
	}
	
return 0;
printf("\n");
	system("pause");
}
