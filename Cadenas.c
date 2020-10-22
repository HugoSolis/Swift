#include <stdio.h>
#define LIMITE 10
#define INCREMENTO 2

void Mostrar( int cadena[], int longitu );
void Modificar( int cadena[], int longitu );

int main(){
int String[LIMITE] = {0,1,2,3,4,5,6,7,8,9};
Mostrar( String, LIMITE );
Modificar( String, LIMITE );
Mostrar( String, LIMITE );
return 0;
}

void Mostrar( int Cad[], int Lon){
printf("\nMOSTRAR\n");
printf( "%s%8s\n", "Index", "Valor" );
for( int i = 0; i < Lon; i++)
printf( "%3d%8d\n", i + 1, Cad[i] );
}

void Modificar( int Cad[], int Lon ){
printf("\nMODIFICAR\n");
for( int i = 0; i < LIMITE; i++ )
Cad[i] *= INCREMENTO;
}