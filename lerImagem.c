#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[20];
	float nota;
} aluno;

int main () {

	int j,i,k,letra,ch;
	char nome[30],cha[1],ler[201],print[4];
	aluno alunos[5];
	//printf("Nome do Arquivo: ");
	//scanf(" %[^\n]", nome);
	FILE *arq, *trad;
	arq = fopen("cat.luis"/*nome*/,"r");
	
	if(arq!=NULL){

		
		printf("Arquivo Aberto!\n");

		while(!feof(arq)){ // vai ate o final do arquivo

			fgets(ler,200, arq);
			j=0;
			for( k = 0 ;!feof(arq) && ler[k] != '\n' ; k++){
				
				print[j] = ler[k];
				//printf(" %c",print[j]);
				j++;
				
				if(j==3){

					ch= atoi(print);
					printf("%c",ch);
					j=0;
		
				}
			}
			printf("\n");				
		}
		fclose(arq);
		

	}
	else {
		printf("ERRO ao abrir o arquivo.\n");
	}
	system("pause");
	return 0;
}
















