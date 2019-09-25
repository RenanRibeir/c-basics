#include <stdio.h>
#include <stdlib.h>

int main(){

	int qtdref,qtdf,qtdp;
	float ref = 1.5,f = 3.0,total,totalf;

	printf("Preco do refrigerante: R$ 1,50. Preco da fatia de pizza: R$ 3,00.\n");
	printf("Digite a quantidade de refrigerantes: ");
	scanf("%d",&qtdref);
	printf("Digite a quantidade de fatias: ");
	scanf("%d",&qtdf);	
	printf("Digite a quantidade de pessoas na mesa: ");
	scanf("%d",&qtdp);
 
	total = (qtdref*ref + qtdf*f)*qtdp;
	totalf = total+total*0.1;
	printf("Total: %f",total);
	printf("\nTotal Final: %f",totalf);
	printf("\n");


	system("pause");
	return 0;
		
}
