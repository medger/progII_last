/*
Crie uma função que receba 2 parâmetros float de entrada;
retorna um float contendo o maior entre os 2 valores;
Crie o main para chamar a função;
*/
#include<stdio.h>
float max(float num1, float num2);
int main()
{
    float num1, num2, resp=0;
    printf("Digite o 1º numero:\n");
    scanf("%f",&num1);
    printf("Digite o 2º numero:\n");
    scanf("%f",&num2); 
    
    resp=max(num1,num2);
    
    printf("Numero maximo: %f",resp);
return 0;
}

float max(float num1, float num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}