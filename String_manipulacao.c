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
    5.4-Gere uma 3a. variável pela concatenação das 2 strings nome1 e nome2
*/
#include<stdio.h>
#include <string.h>
int main()
{
    char palavra1[20], palavra2[20], concatena[40];
    int tam1, tam2;
    printf("\nDigite a primeira palavra\n");
    scanf("%s",palavra1);
        tam1=strlen(palavra1); //joga para a variável tam1, o comprimento de palavra1
    printf("\nDigite a segunda palavra\n");
    scanf("%s",palavra2);
        tam2=strlen(palavra2);//joga para a variável tam2, o comprimento da palavra2
    
        if(strcmp(palavra1,palavra2)==0) //compara as palavras
        {
            printf("\nAs palavras são iguais.");
        }
        else
        {
            printf("\nAs palavras são diferentes.");
        }
        printf("\n\nA primeira palavra mede %d caractere(s).",tam1);
        printf("\nA segunda palavra mede %d caractere(s).",tam2);
        
        strcat(palavra1,palavra2);//junta as palavras
        printf("\nPalavras concatenadas: %s",palavra1); //ao concatenar, usa-se a primeira variavel usada como base para representar as palavras juntas.
return 0;
}