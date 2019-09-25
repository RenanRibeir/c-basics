#include <stdio.h>
#include <stdlib.h>

int main(){

	float n1,n2,n3;

    printf("Digite primeiro numero: ");
    scanf("%f",&n1);

    printf("Digite segundo numero: ");
    scanf("%f",&n2);

    printf("Digite terceiro numero: ");
    scanf("%f",&n3);
	
	float media = (n1+n2+n3)/3;
	
	printf ("media e: %f",media);
	printf ("\n");
	
	system("pause");
	return 0;
		
}
