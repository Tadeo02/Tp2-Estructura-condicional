#include <stdio.h>
#include <stdlib.h>


//Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1=0;
	int n2=0;
	int r1=0;
	int r2=0;
	
	printf("Ingrese su primer valor: ");
	scanf("%d", & n1);
	printf("Ingrese su segundo valor: ");
	scanf("%d", & n2);
	
	r1=n1-n2;
	r2=n2-n1;
	
      if (n1>n2){
      	printf("Su resultado es: %d \n", r1);
	  }else{
	  	printf("Su resultado es: %d \n", r2);
	  }
	  
	
	
	
	
	return 0;
}
