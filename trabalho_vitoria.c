/*
Faça uma função que receba o tamanho de um cômodo em m² e o 
tamanho do piso em cm² que será usado, e retorne a quantidade de pisos 
que será preciso para preencher todo o chão.
*/
#include<stdio.h>
float converteComodo (float comprimento, float largura);
float convertePiso (float pcomprimento, float plargura);
float quantidade(float comodo, float piso);

int main()
{
    float comprimento=0, largura=0, comodo=0;
    float pcomprimento=0, plargura=0, piso=0;
    float resp;
        printf("Digite o COMPRIMENTOxLARGURA do cômodo em METROS:\n");
        scanf("%f%f", &comprimento,&largura);
            comodo=converteComodo(comprimento, largura);
            printf("\nTamanho do cômodo em M²: %.2f", comodo);
        
        printf("\n\nEntre com COMPRIMENTOxLARGURA do PISO em CENTÍMETROS:\n");
        scanf("%f%f", &pcomprimento,&plargura);
            piso=convertePiso(pcomprimento,plargura);
            printf("Tamanho do piso de CM para M²: %.2f", piso);
            
            resp=quantidade(comodo,piso);
        printf("\nPrecisará de %.2f pisos para preencher o comodo", resp);
return 0;
}

float converteComodo (float comprimento, float largura)
{
    comprimento*=largura;
    return comprimento;
}

float convertePiso (float pcomprimento, float plargura)
{   
    float total=0,aux=0;
    aux=pcomprimento*plargura; //converte CM para CM²
    total=aux/10000; //converte CM² para M²
    return aux;
}

float quantidade(float comodo, float piso)
{
    float aux=0;
    aux=comodo/piso;
    return aux;
}