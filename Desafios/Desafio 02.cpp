//Organiza o arquivo ICOMPY.TXT
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.c>
#include <locale.h>
#define TamLista 2300

//Visualizar arquivo ICOMPY

FILE *arq;
int cont=0;
float reais = 0;
char linha[90];
char codigo[TamLista][8];
char descricao[TamLista][57];
float precodol[TamLista];
int filtrado[TamLista];
int y = 0;
char pesquisa[60];
char pesquisamaiusc[60];
int teste;
bool importa = false;
int opcao = 0;
int OpBusca;
int validos;

	char tecla;
	int Prod_Pag = 20;
	int Mult_Pag = 0;
	int pagina = 1;
	int limite;
	int pagina_digitada;
	int contalinha;

void Menu();
void Menu_Consulta();
void imprime();

void Busca_Pagina(){
	
	pagina_digitada = 0;
	
	while(pagina_digitada > limite || pagina_digitada < 1){
		printf("\nDigite o número da página: ");
		scanf("%i", &pagina_digitada);
		if(pagina_digitada > limite || pagina_digitada < 1){
			
		printf("Digite uma página válida(Tecle para continuar...)");
		fflush(stdin);
		getch();
		gotoxy(1, -2);
			for(int y = 0; y < 2; y++ ){
				for(int x = 0;x < 50; x++){
					printf(" ");
				}
			}
		}
	}
	
	pagina = pagina_digitada;
	Mult_Pag = pagina_digitada-1;
	imprime();
	
}

void paginacao(int qntd){
	
	contalinha = 0;
	
	for(int x=0; x<qntd; x++){
			
		if((codigo[filtrado[x+(qntd*Mult_Pag)]]!= "") && (descricao[filtrado[x+(qntd*Mult_Pag)]] != "") && (precodol[filtrado[x+(qntd*Mult_Pag)]] != 0)){
			printf("\n|  %s", codigo[filtrado[x+(qntd*Mult_Pag)]]);
			for(int y=0; y<8-(strlen(codigo[filtrado[x+(qntd*Mult_Pag)]])); y++){
				printf(" ");
			}
			printf("|%s", descricao[filtrado[x+(qntd*Mult_Pag)]]);
			for(int y=0; y<57-(strlen(descricao[filtrado[x+(qntd*Mult_Pag)]])); y++){
				printf(" ");
			}
				
			printf("|%10.2f|%10.2f|", precodol[filtrado[x+(qntd*Mult_Pag)]], reais* (precodol[filtrado[x+(qntd*Mult_Pag)]]));
			contalinha++;
		}
	}
}

void Busca(char *palavra){
	clrscr();
	
	
	int TamDesc, TamPalavra, ContaLetra = 1, Impresso = 0;
	validos = 0;
	
	for(int a=0; a<=TamLista; a++){
		Impresso = 0;
		ContaLetra = 1;
		
		TamDesc = strlen(descricao[a]);
		TamPalavra = strlen(palavra);
		
		for(int b=0; b<TamDesc; b++){
			ContaLetra = 1;
			
			
			if(palavra[0] == descricao[a][b]){
				if(Impresso != 0){
					ContaLetra = 1;
					
				}else{
				
				
				for(int c=1; c<TamPalavra; c++){
					
					if(palavra[c] == descricao[a][b+c]){
						ContaLetra += 1;
						
					}
					
					if(ContaLetra == TamPalavra){
						clrscr();
						Impresso++;
						ContaLetra = 1;
						filtrado[validos] = a;
						validos++;
						}
					}
					
				}
			
			}
			
		}	
	}
	
	imprime();
	
}

void Busca_Cod(char *code){
	clrscr();
	
	
	int TamDesc, TamCode, ContaLetra = 1, Impresso = 0;
	validos = 0;
	
	for(int a=0; a<=TamLista; a++){
		Impresso = 0;
		ContaLetra = 1;
		
		TamDesc = strlen(codigo[a]);
		TamCode = strlen(code);
	
		
		for(int b=0; b<TamDesc; b++){
			ContaLetra = 1;
			
			
			if(code[0] == codigo[a][b]){
				if(Impresso != 0){
					ContaLetra = 1;
					
				}else{
				
				
				for(int c=1; c<TamCode; c++){
					
					if(code[c] == codigo[a][b+c]){
					
						ContaLetra += 1;
						
					}
					
					if(ContaLetra == TamCode){
						Impresso++;
						ContaLetra = 1;
						filtrado[validos] = a;
						validos++;
						}
					}
					
				}
			
			}
			
		}	
	}
	
	imprime();
	
	
	
}

void imprime(){
	
	gotoxy(1, 1);
	textbackground(BLACK);
	for(int y = 0; y<=38; y++){
		for(int x = 0; x<=91; x++){
			printf(" ");
		}
	}
	gotoxy(1,1);
	for(int x=0; x<=91; x++){
		printf("%c", 45);		
	}
	
	printf("\n|  CODIGO  |                        DESCRIÇÃO                        |   DOLAR  |   REAL   |");
	
	printf("\n");
	for(int x=0; x<=91; x++){
		printf("%c", 45);		
	}
	if(validos%Prod_Pag == 0){
		
		limite = (validos/Prod_Pag);
	}else{
		
		limite = (validos/Prod_Pag)+1;
	}
			while(pagina <= limite){
			paginacao(Prod_Pag);
			printf("\n");
			for(int x=0; x<=91; x++){
				printf("%c", 45);		
			}
			printf("\n%i de %i", pagina, limite);
			printf("\nTecle + para avançar e - para voltar\nTecle ENTER para pesquisar uma página\nTecle ' para voltar ao menu");
			fflush(stdin);
			tecla = getch();
			switch (tecla){
				
				case 45:
				if(pagina>1){
					pagina -= 1;
					Mult_Pag -= 1;
					imprime();
					}else{
						imprime();
					}
				break;
				
				case 61:
				if(pagina<limite){
					pagina += 1;
					Mult_Pag += 1;
					imprime();
				}else{
					imprime();
				}
				break;
				
				case 13:
				
				Busca_Pagina();
				
				break;
				
				case 39:
				gotoxy(1, 1);
				textbackground(BLACK);
				for(int y = 0; y<=38; y++){
					for(int x = 0; x<=91; x++){
						printf(" ");
					}
				}
				pagina = limite+1;
				fflush(stdin);
				Menu();
				
				break;
				
				default:
				
					printf("\nDigite uma opção válida\nTecle para continuar...");
					tecla = getch();
					imprime();
				
				break;
			}
		}
}

void Separa_Codigo(){

	int i=0;
	char maiusc[90];
	
	for(int x = 0; x<=7; x++){
		maiusc[x] = toupper(linha[x]);
	}
	maiusc[strlen(maiusc)] = '\0';

	for(int x=0; x<=7; x++){
		if((linha[x]!=32 || linha[x]!=0 ) && ((linha[x]>='0' && linha[x]<='9') || ((maiusc[x]>=65 && maiusc[x]<=90)))){
			codigo[y][i] = linha[x];
			i++;
		}
	}
	codigo[y][i] = '\0';
}

void Organiza_Codigo(){
	char tmp [60];
	int temp;
	
		for (int z = 0; z<TamLista; z++){
			for(int x=0; x<=(TamLista-z);x++){
			
			if(atoi(codigo[x])>atoi(codigo[x+1])){
			
			strcpy(tmp, codigo[x]);
			strcpy(codigo[x], codigo[x+1]);
			strcpy(codigo[x+1], tmp);
			
			strcpy(tmp, descricao[x]);
			strcpy(descricao[x], descricao[x+1]);
			strcpy(descricao[x+1], tmp);
			
			temp = precodol[x];
			precodol[x] = precodol[x+1];
			precodol[x+1] = temp;
			
			}	
		}
	}
	
}

void Separa_Descricao(){
	
	char maiusc[60];
	int TamDesc;
	
	for(int x = 10; x<=66; x++){
		maiusc[x-10] = toupper(linha[x]);
	}
	maiusc[strlen(maiusc)] = '\0';
	
	while(maiusc[strlen(maiusc)-1] == 46){
		if(maiusc[strlen(maiusc)-1] == 46){
			maiusc[strlen(maiusc)-1] = '\0';
		}
	}
	
	strcpy(descricao[y], maiusc);
	
	
}

void Organiza_Descricao(){
		char tmp[60];
		int temp;
		
		for (int z = 0; z<TamLista; z++){
			if(descricao[z] == ""){
				for(int x=0; x<=(TamLista-z);x++){
			
					if(strcmp(descricao[x], descricao[x+1]) == 1){
				
						strcpy(tmp, descricao[x]);
						strcpy(descricao[x], descricao[x+1]);
						strcpy(descricao[x+1], tmp);
					
						strcpy(tmp, codigo[x]);
						strcpy(codigo[x], codigo[x+1]);
						strcpy(codigo[x+1], tmp);
						
						temp = precodol[x];
						precodol[x] = precodol[x+1];
						precodol[x+1] = temp;
					}	
				}
			}
		}
}

void Separa_Preco(){
	
	char temp[10];	
	int i = 0;
		
	for(int x = 68; x <= 76; x++, i++){
		
		temp[i] = linha[x];
		if(temp[i] == '.'){
			temp[i] = ',';
		}
	}

	temp[i] = '\0';
	precodol[y] = atof(temp);
}

void le_arquivo(){
	clrscr();
	if (!importa){
	
	arq = fopen("icompy.txt", "r");
	if (arq == NULL){
		printf("Houve um erro ao abrir o arquivo.");
	}else{	
	
		while (!feof(arq)){
		
			fgets(linha, 90, arq);
			
			if (linha[strlen(linha)-1] == '\n'){
			linha[strlen(linha)-1] = '\0';
			}
					
			if (cont>= 7){
			
				Separa_Codigo();
				Separa_Descricao();
				Separa_Preco();
				
				y++;			
			}
			else{
				cont++;
			}
		}
		
	
		fclose(arq);
	
	}
	
	importa = true;
	printf("Importação feita com sucesso!\nTecle para continuar...");
	getch();
    Menu();
	}else{
		printf("O Arquivo já foi importado!\nTecle para continuar...");
		getch();
		Menu();
	}
}

void Menu_Ordem(){
	
		clrscr();
	
	
	printf(" ");
	
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}
	
	printf("\n%c        ORDEM DE EXIBIÇÃO         %c", 124, 124);
	
	for(int b=0; b<=35; b++){
		switch (b){
		
		case 0:
			printf("\n%c", 124);
		break;
					
		case 35:
			printf("%c", 124);
		break;
						
		default:
			printf("%c", 45);
		break;
		}
	}
	
	for(int a=0; a<=6; a++){
		printf("\n%c", 124);
		switch(a){
			
			case 1:
				printf("          1. Por Código           ");
			break;
			
			case 3:
				printf("     2. Por Ordem Alfabética      ");
			break;
			
			case 5:
				for(int x=0; x<=33; x++){
					printf("%c", 45);
				}
			break;
			
			case 6:
				printf("           0.  VOLTAR             ");
			break;
			
			default:
				for(int x=0; x<=33; x++){
					printf(" ");
				}
		}
	printf("%c", 124);
	}
	printf("\n ");
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}

	printf("\nDigite a opção desejada: ");
	scanf("%i", &opcao);
	fflush(stdin);
	
	switch(opcao){
		
		case 1:
			Organiza_Codigo();
			Menu_Consulta();
		break;
		
		case 2:
			Organiza_Descricao();
			Menu_Consulta();
			
		break;
		
		case 0:
		
			Menu();
		
		break;
		
		default:
			clrscr();
			printf("Digite uma opção válida!\nPressione qualquer tecla para continuar...");
			getch();
			Menu_Ordem();
		
	}	
	
}

void Menu_Consulta(){
	
	clrscr();
	
	printf(" ");
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}
	printf("\n%c             CONSULTA             %c", 124, 124);
	for(int b=0; b<=35; b++){
		switch (b){
		
		case 0:
			printf("\n%c", 124);
		break;
					
		case 35:
			printf("%c", 124);
		break;
						
		default:
			printf("%c", 45);
		break;
		}
	}
	
	for(int a=0; a<=8; a++){
		printf("\n%c", 124);
		switch(a){
			
			case 1:
				printf("          1. Por Código           ");
			break;
			
			case 3:
				printf("          2. Por Nome             ");
			break;
			
			case 5:
				printf("          3. Exibir Todos         ");
			break;
			
			case 7:
				for(int x=0; x<=33; x++){
					printf("%c", 45);
				}
			break;
			
			case 8:
				printf("           0.  VOLTAR             ");
			break;
			
			default:
				for(int x=0; x<=33; x++){
					printf(" ");
				}
		}
	printf("%c", 124);
	}
	printf("\n ");
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}

	printf("\nDigite a opção desejada: ");
	scanf("%i", &opcao);
	fflush(stdin);
	printf("%i", opcao);
	
	switch(opcao){
		
		case 1:
			OpBusca = 1;
			clrscr();
			printf("\n  Digite um código para a busca:   \n  ");
			fflush(stdin);
			gets(pesquisa);
			Busca_Cod(pesquisa);
			
		break;
		
		case 2:
			clrscr();
			
			printf("\n  Digite uma palavra chave para a busca:   \n  ");
			fflush(stdin);
			gets(pesquisa);
			
				for(int x = 0; x<strlen(pesquisa); x++){
				pesquisamaiusc[x] = toupper(pesquisa[x]);
				}

			pesquisamaiusc[strlen(pesquisamaiusc)] = '\0';
			
			Busca(pesquisamaiusc);
			
		break;
		
		case 3:
			for(int x=0; x<TamLista; x++){
				filtrado[x] = x;
			}
			validos = TamLista;
			imprime();
		break;
		
		case 0:
			
			Menu_Ordem();
			
		break;	
		
		default:
			clrscr();
			printf("Digite uma opção válida!\nPressione qualquer tecla para continuar...");
			getch();
			Menu_Consulta();
		break;
		
	}	
}

void Menu(){
	
	clrscr();
	
	
	printf(" ");
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}
	printf("\n%c               MENU               %c", 124, 124);
	for(int b=0; b<=35; b++){
		switch (b){
		
		case 0:
			printf("\n%c", 124);
		break;
					
		case 35:
			printf("%c", 124);
		break;
						
		default:
			printf("%c", 45);
		break;
		}
	}
	for(int a=0; a<=8; a++){
		printf("\n%c", 124);
		switch(a){
			
			case 1:
				printf("      1. Importar Arquivos        ");
			break;
			
			case 3:
				printf("  2. Informe a cotação do dólar   ");
			break;
			
			case 5:
				printf("      3. Consultar Arquivos       ");	
			break;
			
			case 7:
				for(int x=0; x<=33; x++){
					printf("%c", 45);
				}
			break;
			
			case 8:
				printf("      0.      SAIR                ");
			break;
			
			default:
				for(int x=0; x<=33; x++){
					printf(" ");
				}
		}
	printf("%c", 124);
	}
	printf("\n ");
	for(int x=0; x<=33; x++){
		printf("%c", 45);
	}

	printf("\nDigite a opção desejada: ");
	scanf("%i", &opcao);
	fflush(stdin);
	
	switch(opcao){
		
		case 1:
			le_arquivo();
		break;
		
		case 2:
			clrscr();
			
			printf("  Digite a cotação atual do dolar em reais(use vírgula para os centavos): \n  R$");
			fflush(stdin);
			scanf("%f", &reais);
			Menu();
			
		break;
		
		case 3:
			if(importa && (reais != 0)){
				Menu_Ordem();
			}else{
				if(!importa){
					clrscr();
					printf("Nenhum arquivo foi importado...\nPara fazer uma consulta é preciso importar um arquivo!\nTecle para continuar...");
					getch();
					Menu();
				}else{
					clrscr();
					printf("Informe a cotação atual do dólar antes de fazer uma consulta!\nTecle para continuar...");
						getch();
						Menu();
					
				}
			}
			
		break;
		
		case 0:
			
			
			break;
			
		default:
			clrscr();
			printf("Digite uma opção válida!\nPressiona qualquer tecla para continuar...");
			getch();
			Menu();
	}

}
 
int main(){
	setlocale(LC_ALL, "portuguese");
	
	Menu();
	
}




