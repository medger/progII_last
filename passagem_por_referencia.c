#include <stdio.h>
void incrementa_um(int *num); //asterisco recebe o espaço de memória alocado da variavel "x" no main
int main()
{
    int x;
    x=10;
    printf("x=%d",x);
    incrementa_um(&x);// & comercial passa a referência da variavel
    
    printf("\nx=%d",x);
return 0;
}
void incrementa_um(int *num)
{
    *num=*num + 1;
}