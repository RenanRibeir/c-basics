#include <stdio.h>
#include <stdlib.h>

int main()
{

float n1,n2,n3;

printf("digite a primeira nota: ");
scanf("%f",&n1);
printf("digite a segunda nota: ");
scanf("%f",&n2);
printf("digite a terceira nota: ");
scanf("%f",&n3);

float media = (n1+n2+n3)/3;

if(media >= 7){
printf("Aprovado nota: %f",media);
}else if (media < 3.5){
printf("Reprovado nota : %f \n",media);
}else{
float mediap = (500-(media*60))/40;
printf("Quarta Prova nota : %f ,prescisa tirar: %f\n",media,mediap);
}


system("pause");
return 0;

}