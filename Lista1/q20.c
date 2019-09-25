#include <stdio.h>
#include <stdlib.h>

int main()
{

int n1,n2,soma;

printf("Digite o primeiro numero: ");
scanf("%d",&n1);
printf("Digite o segundo numero: ");
scanf("%d",&n2);

while(n1<=n2){
    soma = soma + n1;
    n1++;
}

printf("soma= %d\n",soma);

//system("pause");
return 0;


}