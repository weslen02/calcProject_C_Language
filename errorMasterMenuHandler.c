/*-----------------------
	By Dev: Weslen Almeida
	Date: 	11/15/2018
-------------------------*/
//TRATAMENTO DE ERRO PARA OS MENUs, SE DIGITADO INCORRETO RETORNA ERRO
#include "masterHeaderHandler.h"

int errorMenuHandler(int opt, int sizeV){
	int i=0;

	//------------------------------------------------------------------
	//alocação dinamica
	int *v;

	v = (int *) calloc(sizeV, sizeof(int));
	//------------------------------------------------------------------

	for(i=0; i<sizeV; i++) v[i] = i+1;
	//for(i=0; i<sizeV; i++) printf("\nporsicao vetor - %d", v[i]);

	int *ptr = v;
	int *endPoint = v + (sizeV-1); //aponta para ultima posição do vetor

	do{
		//se valor da endereço apontado == opcao escolhida
		if(*ptr == opt){
			// garantindo liberação do espaço de memória alocado
			v = (int *) realloc(v, 0);
			return opt;//retorna opcao
		}else if(*ptr == *endPoint){ //se valor apontado == ao valor do fim do meu vetor
			//printf("\nptr = %d | endpoint == %d\n", *ptr, *endPoint);

			/*//liberando o espaço de memória alocado
			free(v);*/

			// garantindo liberação do espaço de memória alocado
			v = (int *) realloc(v, 0);
			return _ERROR;// retorna erro, valor digita não compativel
		}
		++ptr; //funcionalidade idem neste caso >> *ptr++;
	}while(*ptr <= *endPoint); //continua até fim do vetor, não entra aqui sempre sai nas condiçoes de SE. Mas garantimos fim do loop

	// garantindo liberação do espaço de memória alocado
	v = (int *) realloc(v, 0);
}
