#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1=0;
	
	printf("Ingrese su valor: ");
	scanf("%d",&n1);
	
	if(n1 != 0)
	{printf("su valor es ");
	
	   if(n1>0){printf("mayor a 0 \n");
	   }else{printf("menor a 0 \n");
	   }
	}else{printf("su valor es igual a 0 \n");
	}	
	
	
	system("pause");
	
	
	return 0;
}
