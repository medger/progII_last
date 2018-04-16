#include<stdio.h>
void fibo(int termo);
int main()
{
    int num;
    printf("Entre com um numero para sequencia Fibonacci: \n");
    scanf("%d",&num);
    fibo(num);
    return 0;
}


void fibo(int termo)
{
    int aux, i=3;
    int n1=0, n2=1;
    
    if (termo >= 1 )
        printf("\n0 ");
        
    if (termo >= 2)
        printf("1 ");
    
    while(i<=termo && termo>2)
    {
        aux = n1 + n2;
        printf("%d ", aux);
        n1=n2;
        n2=aux;
        i++;
    }
    
}
