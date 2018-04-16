/*
1	Digite seu nome e o valor da av1 e av2, retornar seu nome em caixa alta e 
se foi aprovado ou não na matéria, considerando media 6.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char nome[10];
    float media=6.0, av1=0,av2=0;
    
    printf("Digite seu nome: \n");
        scanf("%s",nome);
    printf("%s, digite a nota da AV1 e AV2: ", nome);
        scanf("%f %f",&av1,&av2);
    if((av1+av2)/2>=6)
        printf("Aprovado");
    else
        printf("Reprovado");
        
return 0;
}