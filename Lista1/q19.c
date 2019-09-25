#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char senha[8] = "";

while(strcmp(senha,"senha123") != 0){
printf("Digite sua senha: \n");
scanf("%s",senha);

}

printf("Senha correta");

system("pause");
return 0;

}