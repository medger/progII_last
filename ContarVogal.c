/*
5 - crie uma função em C que recebe uma string e retorna quantas vogais possue nesta string.
*/
#include<stdio.h>
#include<string.h>
int contaVogais(char *nome);

int main()
{
    char str[40], resp;
    printf("Digite uma palavra\n");
    scanf("%s",str);
    
    resp=contaVogais(str);
    
    printf("Essa palavra possui %d vogais", resp);
return 0;
}



int contaVogais(char *nome)
{
    int i,tam=0, cont=0;
    tam=strlen(nome);
    for(i=0;i<tam;i++)
    {
        if(nome[i]=='a'||nome[i]=='A'||nome[i]=='e'||nome[i]=='E'||nome[i]=='i'||nome[i]=='I'||nome[i]=='o'||nome[i]=='O'||nome[i]=='u'||nome[i]=='U')
        {
            cont+=1;
        }
    }
return cont;
}