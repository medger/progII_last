/* Faça um programa com a função de SOMA, mas que leia do usuário os numeros */
#include<stdio.h>
int soma(int num1, int num2);
void main()
{
  int num1, num2, resp;
  printf("Número 1: ");
  scanf("%d", &num1);
  printf("Número 2: ");
  scanf("%d", &num2);
  
  resp=soma(num1,num2);
  
  printf("%d",resp);
}

int soma(int num1, int num2)
{
    return (num1+num2);
}