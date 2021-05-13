#include <stdio.h>
#include <stdlib.h>

/* Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo 
que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80 */

int main(int argc, char *argv[]) {
	
    int h=0;
    int c=0;
    int s=0;
	
	printf("Ingrese horas trabajadas:");
	scanf("%d", &h);
	printf("Ingrese categoria:");
	scanf("%d", &c);
	
	if (c == 1){
		s= (50*h);
		printf("Sueldo: %d", s);
	}
	
		if (c == 2){
		s= (70*h);
		printf("Sueldo: %d", s);
    }
    
    	if (c == 3){
		s= (80*h);
		printf("Sueldo: %d", s);
	}
	
	
	
	return 0;
}
