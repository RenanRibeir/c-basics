#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade=19;
    float altura=1.76;
    char fistl='R';
    char nome[30] = "Renan Ribeiro Santos";

    printf("Digite a idade: ");
    scanf("%d",&idade);

    printf("Digite a Altura: ");
    scanf("%f",&altura);

    fflush(stdin);
    
    printf("Digite a primeira letra: ");
    scanf("%c",&fistl);
    
    fflush(stdin);

    printf("Digite a nome: ");
    fgets(nome,99,stdin);

    printf("\nidade: %d \n",idade);
    printf("Altura: %.2f\n",altura);
    printf("Primeira letra: %c \n",fistl);
    printf("nome: %s \n",nome);

    system("pause");
    return 0;
    
}
