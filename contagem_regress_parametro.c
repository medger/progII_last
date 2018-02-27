#include<stdio.h>
void contagem_regressiva(int ini)
{
    int i=0;
    for(i=ini;i>0;i--)
    printf("\n%d",i);
    printf("\nBOM!");
}

int main()
{
    contagem_regressiva(10);
    contagem_regressiva(5);
    contagem_regressiva(8);
return 0;
}