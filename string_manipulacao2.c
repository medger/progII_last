/*1-Qual é a biblioteca de manipulação de strings da linguagem C ?
R: string.h
2-Qual é a função para “comparar” strings ?
strcmp
3-Qual é a função para “concatenar” strings ?
strcat(string1,string2)
4-Qual é a função para descobrir o “tamanho” de uma string?
R: strlen

5-Faça um programa em C que leia 2 nomes e diga:
    5.1-Se as strings são iguais ou diferentes****OK
    5.2-Imprima os 2 nomes em ordem alfabética 
    5.3-Imprima o tamanho de cada string****OK
    5.4-Gere uma 3a. variável pela concatenação das 2 strings nome1 e nome2****ok
*/
#include<stdio.h>
#include <string.h>
int main()
{
    char palavras[2][20];
    int tam, i=0, j=0;
    printf("\nDigite as palavras\n");
    for(i=0;i<2;i++)
    {
        
        scanf("%s",palavras);
        tam=strlen(palavras);
    }
  
}