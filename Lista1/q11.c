#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("Numero e par\n");
    }else{
        printf("Numero e impar\n");
    }
 
    system("pause");
    return(0);
}
