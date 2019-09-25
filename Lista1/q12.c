#include <stdio.h>
#include <stdlib.h>


void trasferir(int contaenv,int contarec,float conta[]){
    float valor;
    printf("Digite o valor a ser trasferido: ");
    scanf("%f",&valor);

    if(valor < conta[contaenv]){
        conta[contaenv]= conta[contaenv]-valor;
        conta[contarec]= conta[contarec]+valor;
        printf("Saldo conta %d = %f \n",contaenv+1,conta[contaenv]);
        printf("Saldo conta %d = %f \n",contarec+1,conta[contarec]);
    }else{
        printf("Saldo insuficiente \n");
    }

}

int main()
{
    
    float conta[1];
    int select;

    conta[0]=100;
    conta[1]=100;

    printf("Digite o numero de sua conta(1 ou 2): ");
    scanf("%d",&select);

    switch (select)
    {
    case 1:
        trasferir(0,1,conta);
        break;
    
     case 2:
        trasferir(1,0,conta);
        break;

    default:
        printf("Conta não existe");
        break;
    }

    system("pause");
    return(0);
}
