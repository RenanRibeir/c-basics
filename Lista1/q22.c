#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

int numero,ndivisores = 0;
setlocale(0,"Portuguese");
printf("Digite o numero a ser testado: ");
scanf("%d",&numero);

int i;

for (i=1;i<numero;i++){
	if(numero%i == 0){
		ndivisores++;
	}
}

if(ndivisores == 1){
	printf("\n Numero � primo");
}else{
	printf("\n Numero n�o � primo");
}

system("pause");
return(0);

}

