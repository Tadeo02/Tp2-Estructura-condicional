#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1=0;
	int n2=0;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &n1);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &n2);
	
	if (n1 == n2) printf("Los valores son iguales");
	
	else printf("Los valores son distintos");
    
	
	
	
	
	
	return 0;
}
