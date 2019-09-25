#include <stdio.h>
#include <stdlib.h>

int main(){

	int n1,n2,n3;

    printf("Digite primeiro numero: ");
    scanf("%d",&n1);

    printf("Digite segundo numero: ");
    scanf("%d",&n2);

    printf("Digite terceiro numero: ");
    scanf("%d",&n3);
	
	float media = (float)(n1+n2+n3)/3;
	
	printf ("media e: %f",media);
	printf ("\n");
	
	system("pause");
	return 0;
		
}
