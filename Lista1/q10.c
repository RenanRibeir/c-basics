#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float r,a;

    printf("Digite o raio: ");
    scanf("%f",&r);

    a = r*r*M_PI;

    printf("Area= %f",a);

    system("pause");
    return(0);

}