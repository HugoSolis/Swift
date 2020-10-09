#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand( time (NULL));
printf("Valor: %5d\n", rand() % 6);
return 0;
}