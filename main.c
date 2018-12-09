/*-----------------------
	By Dev: Weslen Almeida
	Date: 	11/15/2018
-------------------------*/
//MENU PRINCIPAL
#include "masterHeaderHandler.h"
//meu codigo
int main(){
	float a=3, b=4;
	int op=0, sizeV = 9;// op == opcao do menu | sizeV == tamanho do vetor para alocação dinamica
	do{
		op=0;
		printf("MENU DE OPCOES:\n\t1 - SOMATARIO\n\t2 - CONSTANTES\n\t3 - LOGICA PROPOSICIONAL\n\t4 - MATRIZ\n\t5 - FUNCAO\n\t6 - COMBINATORIA\n\t7 - DIRIVADA NUMERICA\n\t8 - INTEGRACAO NUMERICA\n\t9 - FINALIZAR PROGRAMA\nDigite sua uma opcao: ");
		scanf("%d", &op); setbuf(stdin, NULL);//limpa buffer de memoria
		if(errorMenuHandler(op, sizeV) == _ERROR){
			puts("\n\t\t---------------------------------------------------------------------------------");
			puts(_TEXTERROR);
			puts("\t\t---------------------------------------------------------------------------------\n");
			getch();
			system("CLS"); //windows CLS - Linux  clear ---> limpa a tela
		}
		system("CLS");
		switch (op){
			case 1:
				printf("OPCAO 1 - SOMATORIO\n");
				sumMenuHandler(op);
			break;

			case 2:
				printf("OPCAO 2 - CONSTANTES\n");
			break;

			case 3:
				printf("OPCAO 3 - LOGICA PROPOSICIONAL\n");
			break;

			case 4:
				printf("OPCAO 4 - MATRIZ\n");
			break;

			case 5:
				printf("OPCAO 5 - FUNCAO\n");
			break;

			case 6:
				printf("OPCAO 6 - COMBINAORIA\n");
			break;

			case 7:
				printf("OPCAO 7 - DERIVADA NUMERICA\n");
			break;

			case 8:
				printf("OPCAO 8 - INTEGRACAO NUERICA\n");
			break;

			case 9:
			puts("\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
			puts("\t\t|\t\tOPCAO 9 - FINALIZAR PROGRAMA\t\t\t|");
			puts("\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

			break;
		}
	}while(op != 9);
}
