/*4- Escreva um programa em C para dividir a string pelo espaço em palavras. 
Digite uma string: "esta é uma string de teste" e o programa irá imprimir:
"esta
é
uma
string
de
teste"
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, tam;
    char nome[50];
    printf("Entre com a palavra:\n");
    scanf("%s", nome);
        tam = strlen(nome);//pego o tamanho da palavra e jogo pra tam
    for(i=0;i<tam;i++)//e jogo para a estrutura de repetição
    {
        if(nome[i]==32)
            printf("\n");
        else
            printf("\n%c", nome[i]);
    }
return 0;

}