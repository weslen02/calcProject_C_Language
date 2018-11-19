#include "masterHeaderHandler.h"

void getValueSumHandler(int opt){
	puts("\nEscolha o Valor das Variaveis de Somatorio:");

	printf("\nopt == %d\n ", opt);
	//inserindo valor
	switch(opt){
		case 1:

			puts("Digite o valor de (A)");
			scanf("%f", &insertValue.a);

			do{
			puts("Digite o valor de (N)");
			scanf("%f", &insertValue.n);

			if(insertValue.n < 1) puts("\n!!!!Erro, valor de (N) nao pode ser menor que 1!!!!\n");
			}while(insertValue.n < 1);

			insertValue.k = .0;
		break;

		case 2:
			puts("Digite o valor de (A)");
			scanf("%f", &insertValue.a);

			puts("Digite o valor de (M)");
			scanf("%f", &insertValue.m);

			do{
			puts("Digite o valor de (N)");
			scanf("%f", &insertValue.n);

			if(insertValue.n < 1) puts("\n!!!!Erro, valor de (N) nao pode ser menor que 1!!!!\n");
			}while(insertValue.n < 1);
			insertValue.k = .0;
		break;

		case 3:
			puts("Digite o valor de (A)");
			scanf("%f", &insertValue.a);

			puts("Digite o valor de (M)");
			scanf("%f", &insertValue.m);

			do{
			puts("Digite o valor de (N)");
			scanf("%f", &insertValue.n);

			if(insertValue.n < 1) puts("\n!!!!Erro, valor de (N) nao pode ser menor que 1!!!!\n");
			}while(insertValue.n < 1);

			insertValue.k = .0;
		break;
	}
}
