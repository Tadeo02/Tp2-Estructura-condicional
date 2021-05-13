#include <stdio.h>
#include <stdlib.h>

/* Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor 
edad*/

int main(int argc, char *argv[]) {
	
	 float a1=0, a2=0;
	 int e1=0, e2=0;
	
     printf("Ingrese edad de la primera persona: ");
	scanf("%d", & e1);
	printf("Ingrese altura de la primera persona: ");
	scanf("%f", & a1);
	
	printf("\nIngrese edad de la segunda persona: ");
	scanf("%d", & e2);
	printf("Ingrese altura de la segunda persona: ");
	scanf("%f", & a2);
	
	
	if (e1>e2){printf("La estatura es %.2f", a1);
	}else{
		  printf("La estatura es %.2f", a2);
	}
	
	

	
	
	
	
	return 0;
}
