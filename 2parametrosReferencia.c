#include<stdio.h>
void troca(int *n1, int *n2);
int main()
{
    int num1, num2;
    printf("Digite o 1º numero:\n");
    scanf("%d", &num1);
    printf("Digite o 2º numero:\n");
    scanf("%d", &num2);
    
    troca(&num1,&num2);
    printf("***Numeros trocados***\n");
    printf("1º numero: %d",num1);
    printf("\n2º numero: %d",num2);
}
void troca(int *n1, int *n2)
{
    int aux;
    
    aux=*n1;
    *n1=*n2;
    *n2=aux;
}

