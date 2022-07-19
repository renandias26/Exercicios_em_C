#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main () {
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	int m1 [5][4], m2 [5][4], x, y, a, b;
	
	for (x = 0; x < 5; x++){
		for (y = 0; y < 4; y++){
			
			m1[x][y] = rand () %11;
			printf("%3i", m1[x][y]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (x = 0; x < 5; x++){
		for (y = 0; y < 4; y++){
			m2[x][y] = m1[4-x][3-y];
			printf("%3i", m2[x][y]);
		}
		printf("\n");
	}
	 
	return 0;
	printf("\n");
	system("pause");
}
