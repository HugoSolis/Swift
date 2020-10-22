#include <stdio.h>

int main(){

int *ptrVar;
int Var;
Var = 500;
ptrVar = &Var;

printf("Direccion de Var:\n%8d\nValor de Ptr:\n%8d\n", &Var, ptrVar);
printf("El valor de Var:\n%8d\nValor de *Ptr:\n%8d\n", Var, *ptrVar);
printf("&*Ptr:\n%8d\n*&Ptr:\n%8d\n", &*ptrVar, *&ptrVar);

return 0;
}