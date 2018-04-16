/*
"Elabore uma função em passagem de parâmetro por valor
que receba uma palavra e substitua cada ocorrência de ""n"" antes de ""p"" e ""b"" por ""m"", além disso:
a) Fazer um programa que chame essa função;
b) Conte quantas letras a palavra possui;"

*/

#include<stdio.h>
#include <string.h>

int corrige(char word[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if((word[i]=='p'||word[i]=='P')&&(word[i+1]=='n'||word[i+1]=='N')||(word[i+1]=='b'||word[i+1]=='B'))
            word[i]='m';
    }
    printf("\n A palavra corrigida eh: %s", word);
}

int main()
{
    int tam=0;
    char word[tam];
    
    printf("Digite uma palavra:\n");
    scanf("%s", word);
    
        tam = strlen(word);
        
    printf("\n A palavra possui %d letras.", tam);	//tamanho reconhecido
    
    corrige(word,tam);
    
    return 0;
}