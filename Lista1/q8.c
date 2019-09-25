#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o primeiro numero: ");
    scanf("%f",&n2);

    if(n1 == 0 || n2 == 0){
        printf("Divisão por zero \n");
    }else{
    float quo = n1/n2; 
    printf("Resultado: %f \n",quo);
    }

    system("pause");
    return(0);

}
