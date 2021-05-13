#include <stdio.h>
#include <stdlib.h>

/* Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es */

int main(int argc, char *argv[]) {
	
	int a=0;
	int b=0;
	int c=0;
	
	
	printf("Ingrese los 3 valores \n");
	scanf("%d %d %d",&a, &b, &c );
	
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)){ 
     	printf("Es un triangulo \n");
     	if (a == b && b == c){printf("Equilatero");
		 }else{
		 	if ((a != b) && (b != c) && (c != a)){printf("Escaleno");
			 }else{printf("Isoseles");
			 }
		 }
	}else{
		printf("No es un triangulo \n");
	}
	
	
	
	
	
	return 0;
}
