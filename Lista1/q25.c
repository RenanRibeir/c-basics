#include <stdio.h>
#include <stdlib.h>

int main()
{

int lim;

printf("digite limite de numeros: ");
scanf("%d",&lim);
int * vet = (int*) calloc(lim,sizeof(int));
int i;

for(i=0;i<lim;i++){
scanf("%d",&vet[i]);

}

printf("\n");

for(i=0;i<lim;i++){
    printf("O %d numero digitado foi %d \n",i+1,vet[i]);
}
printf("\n");

//system("pause");
return 0;
}