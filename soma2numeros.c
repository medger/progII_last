/*Faça uma função em C que recebe 2 números como parametros e retorna a soma destes 
2 números. Cole aqui o link do github da sua solução
*/
#include<stdio.h>
int soma()
{
    int num1, num2, total;
    printf("Primeiro número:");
    scanf("\n%d", &num1);
    printf("Segundo numero:");
    scanf("\n%d", &num2);
    total=num1+num2;
    
    printf("Total da soma de %d + %d é: %d", num1,num2,total);
}

int main()
{
    int resp;
    resp=soma();
    
return 0;
}