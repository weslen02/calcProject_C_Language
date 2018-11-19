/*-----------------------
	By Dev: Weslen Almeida
	Date: 	11/15/2018
-------------------------*/
//MENU SOMATORIO
#include "masterHeaderHandler.h"

void sumMenuHandler(){
	int sizeV = 4, opSum;
	do{
		opSum=0;
		printf("MENU DE OPCOES DE SOMATORIO:\n\t1 - SOMATARIO 1 - (k=a^k...n)\n\t2 - SOMATORIO 2 - (k=a^(k^m)...n)\n\t3 - SOMATORIO 3 - (k=a^(m^k)...n)\n\t4 - Voltar ao Menu Principal\nDigite sua uma opcao: ");
		scanf("%d", &opSum); setbuf(stdin, NULL);//limpa buffer de memoria
		opSum = errorMenuHandler(opSum, sizeV);
		if(opSum == _ERROR){
			puts("\n\t\t---------------------------------------------------------------------------------");
			puts(_TEXTERROR);
			puts("\t\t---------------------------------------------------------------------------------\n");
			getch();
			system("CLS");
		}else if((opSum != 4) && (opSum != _ERROR)) getValueSumHandler(opSum);
		switch (opSum){
			case 1:
				puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
				printf("OPCAO 1 - SOMATORIO 1 (k=a^k...n):\n");
				oneSumHandler();
			break;

			case 2:
				puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
				printf("OPCAO 2 - SOMATORIO 2 (k=a^(k^m)...n):\n");
				twoSumHandler();
			break;

			case 3:
				puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
				printf("OPCAO 3 - SOMATORIO 3 (k=a^(m^k)...n):\n");
				threeSumHandler();
			break;

			case 4:
				system("CLS");
				printf("Opcao 4 - Voltar ao MENU PRINCIPAL\n\n");
			break;
		}
	}while(opSum != 4);
}
