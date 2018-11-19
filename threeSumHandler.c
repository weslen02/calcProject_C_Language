#include "masterHeaderHandler.h"

void threeSumHandler(){
	int i;
	float result=0;
	for(i=0; i<insertValue.n ; i++){
		printf("\nn=%d, k=%.0f, a=%.0f m=%.0f\n(k=%.0f^(%.0f^%.0f)...%.0f)",i+1, insertValue.k, insertValue.a, insertValue.m, insertValue.a, insertValue.m, insertValue.k, insertValue.n);
		printf(" = %.5f\n", insertValue.k+= pow(insertValue.a, pow(insertValue.k, insertValue.m)));
	}
	printf("\nResultado final de K = %.5f\n", insertValue.k);
	puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	system("PAUSE");
	system("CLS");
}
