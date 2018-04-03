/*
Elabore uma função em passagem de parâmetro por valor
que receba uma palavra e substitua cada ocorrência de "n" antes de "p" e "b" por "m", além disso:
a) Fazer um programa que chame essa função;
b) Conte quantas letras a palavra possui;
*/
#include<stdio.h>
#include <string.h>
int correcao(char palavra[], int tam);
int main(void)
{
    int tam=0;
    char palavra[tam];
    int chama;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
        tam=strlen(palavra);
    printf("\nA palavra possui %d letras.", tam);//tamanho reconhecido
    correcao(palavra,tam);
    
return 0;
}
int correcao(char palavra[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if((palavra[i]=='n'||palavra[i]=='N')&&(palavra[i+1]=='p'||palavra[i+1]=='P')||(palavra[i+1]=='b'||palavra[i+1]=='B'))
            palavra[i]='m';
    }
    printf("\nPalavra corrigida: %s", palavra);
}