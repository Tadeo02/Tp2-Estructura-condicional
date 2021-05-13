#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d=0, m=0, a=0;
	
	printf("Ingrese el dia:");
	scanf("%d",& d);
	printf("Ingrese el mes:");
	scanf("%d",& m);
	printf("Ingrese el ano:");
	scanf("%d",& a);
	
	if ( m >= 1 && m <= 12 )
	
	
	
	if ( d >= 1 && d <= 31 ){
	                        printf( "\n   FECHA CORRECTA" );
                      }else{
					        printf( "\n   FECHA INCORRECTA" );
                      }
	
	if ( d >= 1 && d <= 30 ){
	                        printf( "\n   FECHA CORRECTA" );
                      }else{
                      	    printf( "\n   FECHA INCORRECTA" );
					  }
                          
	
	         if( a / 4 == 0 && a / 100 != 0 || a / 400 == 0 )
                          if ( d >= 1 && d <= 29 ){
                          	                     printf( "\n   FECHA CORRECTA" );
						  }else{
						  	     printf( "\n   FECHA INCORRECTA" );
						  }else{
						  	 if ( d >= 1 && d <= 28 ){
							                            printf( "\n   FECHA CORRECTA" );
                          }else{
                                 printf( "\n   FECHA INCORRECTA" );
						  }
						  }
						  
						
		
					
						  
						  	   
                          
                          
                              
	
	return 0;
}
