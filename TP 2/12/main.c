#include <stdio.h>
#include <stdlib.h>

/* Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 
años de antigüedad */

int main(int argc, char *argv[]) {


    int s=0;
	int c=0;
    int a=0;
	
	printf("Ingrese el sueldo:");
	scanf("%d", &s);
	printf("Ingrese la categoria:");
	scanf("%d", &c);
	printf("Ingrese antiguedad:");
	scanf("%d", &a);
    
    if (a>5){
	
    
    if (c == 1){
    	      s += (50*a);
    	      printf("Sueldo final: %d", s);
	}else{
		s += (s*a);
		printf("Sueldo final %d", s);
	}
}

	
	
	
	return 0;
}
