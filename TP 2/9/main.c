#include <stdio.h>
#include <stdlib.h>

/* Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo 
conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 
hs le dan otros $ 100 adicionales. Imprimir el sueldo */

int main(int argc, char *argv[]) {
	
	int S=0; //sueldo
	int Tp=0; //tiempo trabajado
	int vh=0; //valor hora
    int p=0; //premio
    int p2=0; //premio2


	printf("Ingrese valor de hora:");
	scanf("%d", & vh);
	printf("Ingrese tiempo trabajado:");
	scanf("%d", & Tp);
	
	S=vh*Tp;
	printf("El sueldo es de:%d\n", S);
	
	p=S+100;
	if (Tp > 50){printf("Se le entregan $100 por trabajar mas de 50hs: \nSUElDO:%d \n", p);
	}
		p2=S+200;
	if (Tp > 150){printf("Se le entregan $100 mas por trabajar mas de 150hs: \nSUElDO FINAL:%d", p2);
	}
	
	
	
	
	
	
	return 0;
}
