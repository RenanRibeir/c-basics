#include <stdio.h>
#include <stdlib.h>

int main()
{

int n1,n2;

printf("Digite o primeiro numero: ");
scanf("%d",&n1);
printf("Digite o segundo numero: ");
scanf("%d",&n2);

do{
    if(n1%2 == 1){
    printf("%d ",n1);
    }
    n1++;
}while(n1<=n2);

   printf("\n");

//system("pause");
return 0;

}