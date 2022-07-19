#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main () {
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	int m1 [5][5], x, y;
	
	for (x = 0; x < 5; x++){
		for (y = 0; y < 5; y++){
			
			m1[x][y] = rand () %11;
			printf("%3i", m1[x][y]);
		}
		printf("\n");
	}

	 
	return 0;
	printf("\n");
	system("pause");
}
