#include <stdio.h>
#include <stdlib.h>

/* Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos 
valores es mayor al promedio */

int main(int argc, char *argv[]) {
	
	
	int n1=0,n2=0,n3=0;
	int p=0;  //promedio

	printf("Ingrese primer valor: ");
	scanf("%d", &n1);
	printf("Ingrese segundo valor: ");
	scanf("%d", &n2);
	printf("Ingrese tercer valor: ");
	scanf("%d", &n3);
	
	p= (n1 + n2 + n3) /3; printf("El promedio es %d \n", p);
	
	  if (n1>p){printf("El valor 1 es mayor al promedio \n");
	  }
	  
	  if (n2>p){printf("El valor 2 es mayor al promedio \n");
	  }
	  
	  if (n3>p){printf("El valor 3 es mayor al promedio \n");
	  }
	  
	  system("pause");
	
	return 0;
}
