//3- Faça um programa em C para ler um nome e transformar todos os caracteres em caixa baixa

//------------------DA ERRO MAS FUNCIONA
#include<stdio.h> 
#include<string.h>
int main()
{
    char str[30];
    printf("Entre com uma palavra com lestras MAIÚSCULAS:\n");
    scanf("%s", str);
    printf("%s", strlwr(str));
return 0;
}