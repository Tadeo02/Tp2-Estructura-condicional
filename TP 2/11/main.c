#include <stdio.h>
#include <stdlib.h>

/*  Ingresar el sueldo, categor�a y antig�edad de un empleado, calcular el sueldo final de cada 
uno de ellos, si el empleado es de la categor�a 1 se le adicionara $50 por cada a�o de 
antig�edad. */

int main(int argc, char *argv[]) {
	
	int s=0;
	int c=0;
	int a=0;
	
	printf("Ingrese el sueldo:");
	scanf("%d", &s);
	printf("Ingrese la categoria:");
	scanf("%d", &c);
	printf("Ingrese su aniguedad:");
	scanf("%d", &a);
	

    if (c == 1){
    	s +=(50*a);
    	printf("Sueldo final: %d", s);
	}else{
		s += (s*a);
		printf("Sueldo final: %d", s);
	}
	
	
	
	
	
	return 0;
}
