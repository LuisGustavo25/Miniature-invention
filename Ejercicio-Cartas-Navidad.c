#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100
void cambio ( char c[T] );
void tam ( char c[T] );
void codificar ( char c[T]);
void draw ( char c[T] );
int main (){
	
	char c[T];
	int i,aux=0,band=0,out=0;
	
	

	while(band!=1){


	printf("%d)Carta:",aux+1);
	fflush(stdin);
	gets(c);
	cambio(c);
	tam(c);
	codificar(c);
	draw(c);
	aux++;
	printf("\n");
	
		
	}

	
	return 0;
}

void cambio ( char c[T] ){  //Funcion para cambiar el \n de \0.
	
	int i;
	
	for (i=0;i<strlen(c);i++){
		if ( c[i]=='\n' ){
			c[i]='\0';
		}
	}
}

void tam ( char c[T] ){  //Funcion que combierte toda la cadena en Mayúscula.
	
	int i;
	
	for (i=0;i<strlen(c);i++){
		
		c[i]=toupper(c[i]);
		
	}
}

void codificar ( char c[T]){
	
	int i,j;

	for ( i=0;i<strlen(c)-1;i++ ){
	if ( c[i]!=32 || c[i]!=90 ){ //32 es el espacio y el 90 es Z, en el código ascii.
		
		c[i]+=1;
		
	}else if ( c[i]==90 ){  //90=Z y 65=A.
		c[i]=65;
		}
	} //Cierre bucle for de i.
}

void draw( char c[T] ){
	int i;
	for ( i=0;i<strlen(c);i++ ){
		if ( c[i]=='G' ){
			if ( c[i]=='J' ){
				if ( c[i]=='O' ){
					return;        //Si es GJO=FIN pero sumandole 1, salimos del bucle y no imprimimos.
				}
			}
		}
		
		printf("%c",c[i]);
		
	}
	
	
}
