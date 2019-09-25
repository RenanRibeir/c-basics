#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,i;

printf("Digite o primeiro numero: ");
scanf("%d",&n);

for(i=n-1;i>0;i--){
    n=n*i;
}

   printf("%d \n",n);

//system("pause");
return 0;

}