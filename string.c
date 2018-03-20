#include<stdio.h>

int main()
{
    char nome[50];
    
    printf("Entre com o nome\n");
    gets(nome);
    printf("(%s)\n",nome);
return 0;
}