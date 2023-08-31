#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0, par=0, vp=0;
	float produto=0, ctotal=0;
	
	for(x=1;x<=8;x++){
		printf("Qual o valor do produto?");
		scanf("%f", &produto);
		fflush(stdin);
		
		ctotal = ctotal + produto;
	}
	ctotal = ctotal+ (ctotal * 0.15); 
	
	printf("valor a pagar e %.2f", ctotal);
	
	printf("\nEscolha sua forma de pagamento[1-2]: ");
	scanf("%i",&par);
	
	switch(par){
		case (1):
			vp = (ctotal + (ctotal * 0.15))/5;
			printf("valor a pagar e de %i", vp);
			break;
		case (2):
			vp = (ctotal + (ctotal * 0.22))/12;
			printf("valor a pagar e de %i", vp);
			break;
		default:
			printf("opcao invalida!");
			printf("\nvalor total: %.2f", ctotal);
	}
}

