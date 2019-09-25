#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso,alt,imc;

    printf("Digite seu peso:");
    scanf("%f",&peso);
    printf("Digite sua altura:");
    scanf("%f",&alt);

    imc = peso/(alt*alt);    

    printf("IMC: %f \n",imc);

    system("pause");
    return(0);

}