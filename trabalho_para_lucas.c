/*
Elabore uma função em passagem de parâmetro por valor
que receba uma palavra e substitua cada ocorrência de "n" antes de "p" e "b" por "m", além disso:
a) Fazer um programa que chame essa função;
b) Conte quantas letras a palavra possui;
*/
#include<stdio.h>
#include <string.h>
int correcao(char frase[], int tam);
int main(void)
{
    int tam=0;
    char frase[tam];
    int chama;
    printf("Digite uma frase:\n");
    scanf("%s", frase);
    if(frase[tam]==' ')
    {
        frase[tam]=tam+1;
    }
    
    tam=strlen(frase);
    printf("%d\n", tam);//tamanho reconhecido
    
    chama=correcao(frase,tam);
    
return 0;
}
int correcao(char frase[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if((frase[i]=='n'||frase[i]=='N')&&(frase[i+1]=='p'
    ||frase[i+1]=='P')||(frase[i+1]=='b'||frase[i+1]=='B'))
            frase[i]='m';
    }
    printf("%s", frase);
}