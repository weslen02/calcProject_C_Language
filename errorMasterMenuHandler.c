/*-----------------------
	By Dev: Weslen Almeida
	Date: 	11/15/2018
-------------------------*/
//TRATAMENTO DE ERRO PARA OS MENUs, SE DIGITADO INCORRETO RETORNA ERRO
#include "masterHeaderHandler.h"

int errorMenuHandler(int opt, int sizeV){
	int i=0;

	//------------------------------------------------------------------
	//aloca��o dinamica
	int *v;

	v = (int *) calloc(sizeV, sizeof(int));
	//------------------------------------------------------------------

	for(i=0; i<sizeV; i++) v[i] = i+1;
	//for(i=0; i<sizeV; i++) printf("\nporsicao vetor - %d", v[i]);

	int *ptr = v;
	int *endPoint = v + (sizeV-1); //aponta para ultima posi��o do vetor

	do{
		//se valor da endere�o apontado == opcao escolhida
		if(*ptr == opt){
			// garantindo libera��o do espa�o de mem�ria alocado
			v = (int *) realloc(v, 0);
			return opt;//retorna opcao
		}else if(*ptr == *endPoint){ //se valor apontado == ao valor do fim do meu vetor
			//printf("\nptr = %d | endpoint == %d\n", *ptr, *endPoint);

			/*//liberando o espa�o de mem�ria alocado
			free(v);*/

			// garantindo libera��o do espa�o de mem�ria alocado
			v = (int *) realloc(v, 0);
			return _ERROR;// retorna erro, valor digita n�o compativel
		}
		++ptr; //funcionalidade idem neste caso >> *ptr++;
	}while(*ptr <= *endPoint); //continua at� fim do vetor, n�o entra aqui sempre sai nas condi�oes de SE. Mas garantimos fim do loop

	// garantindo libera��o do espa�o de mem�ria alocado
	v = (int *) realloc(v, 0);
}
