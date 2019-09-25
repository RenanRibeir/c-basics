#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	int n1,n2,ad,sub,mul,res;
 	double div;
	setlocale(0,"Portuguese");
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	ad = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = (float)n1/(float)n2;
	res = n1%n2;
	
	printf("\nAdic�o: %d",ad);
	printf("\nSubtra��o: %d",sub);
	printf("\nMultiplica��o: %d",mul);
	printf("\nDivis�o: %f",div);
	printf("\nResto: %d",res);
	
	system("pause");
    return(0);

}
