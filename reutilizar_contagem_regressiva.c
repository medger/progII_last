/*
E se eu quiser reutilizar essa função para flexibilizar
o inicio e o fim da contagem regressiva?
*/
#include<stdio.h>
void contagem_regressiva(int ini, int fim) //utilizando dois parâmetros, consegue-se reutilizar a MESMA função, mas com duas condições;
{
    int i=0;
    for(i=ini;i>=fim;i--)
    {
        printf("\n%d",i);
        
    }
    printf("\n------");
    
    
}
int main()
{
    contagem_regressiva(10,8);
   
return 0;
}