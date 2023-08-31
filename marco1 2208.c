#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0,qtd=0;
	float conta=0, ctotal=0;
	
	printf("Insira a quantidade de produtos: ");
	scanf("%i", &qtd);
	fflush(stdin);
	
	for(x=1;x<=qtd;x++){
		printf("Qual o valor da sua conta?");
		scanf("%f", &conta);
		fflush(stdin);
		
		ctotal = ctotal + conta;
	}
	ctotal = ctotal+ (ctotal * 0.15); 
	
	printf("valor a pagar e %.2f", ctotal);
	getchar();
}
