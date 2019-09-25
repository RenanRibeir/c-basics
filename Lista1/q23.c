#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void resultado(int res){printf("resultado é %d\n",res);}

void fat(){
    int n,i;
    printf("Digite o numero: ");
    scanf("%d",&n);
    for(i=n-1;i>0;i--){
        n=n*i;
    }
   resultado(n);
}

void potencia(){

    int base,ex;

    printf("Digite o numero: ");
    scanf("%d",&base);
    printf("Digite o expoente: ");
    scanf("%d",&ex);

    resultado(pow(base,ex));

}

void raiz(){
    
    int rad;

    printf("Digite o numero: ");
    scanf("%d",&rad);

    resultado(sqrt(rad));

}


int main()
{
    
    char sel;

   do{
    printf("1 - potenciação\n2 - raiz quadrada\n3 - fatorial\n0 – sair\n");
    fflush(stdin);
    scanf("%c",&sel);
    switch (sel-48)
    {
    case 1:
        potencia();
        break;
    case 2:
        raiz();
        break;
    case 3:
        fat();
        break;

    default:
        printf("entrada invalida\n");
        break;
    }
    }while(sel != 48);

    //system("pause");
    return 0;

}