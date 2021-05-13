#include <stdio.h>
#include <stdlib.h>

/*  Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de 
estas sumas es mayor */

int main(int argc, char *argv[]) {
	
	int n1=0, n2=0, n3=0, n4=0;
	int r1=0, r2=0;
	
	
	printf("Ingrese primer valor: ");
	scanf("%d", &n1);
	printf("Ingrese segundo valor: ");
	scanf("%d", &n2);
	r1= (n1+n2); printf("El resultado es: %d \n", r1);
	
	printf("Ingrese tercer valor: ");
	scanf("%d", &n3);
	printf("Ingrese cuarto valor: ");
	scanf("%d", &n4);
	r2= (n3+n4); printf("El resultado es: %d \n", r2);
	
	if (r1>r2){printf("El primer resultado es mayor que el segundo");
	}else{
		printf("El segundo resultado es mayor que el primero");
	}
	
	
	
	
	
	
	
	return 0;
}
