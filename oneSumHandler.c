#include "masterHeaderHandler.h"

void oneSumHandler(){
	int i;
	float result=0;
	for(i=0; i<insertValue.n ; i++){
		printf("\nn=%d, k=%.0f, a=%.0f\n(k=%.0f^%.0f...%.0f)",i+1, insertValue.k, insertValue.a, insertValue.a, insertValue.k, insertValue.n);
		printf(" = %.5f\n", insertValue.k+= pow(insertValue.a, insertValue.k));
	}
	printf("\nResultado final de K = %.5f\n", insertValue.k);
	puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	system("PAUSE");
	system("CLS");
}
