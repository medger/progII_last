/*
Crie uma função chamada triangulo_valido para validar os lados de 
um triangulo de acordo com a regra abaixo:
http://mundoeducacao.bol.uol.com.br/matematica/condicao-existencia-um-triangulo.htm
*/
#include<stdio.h>
int valida(int n1, int n2, int n3);
int main()
{
    int l1, l2, l3;
    int resp;
    printf("Digite o 1º lado:\n");
    scanf("%d",&l1);
    if(l1<0)
        l1=l1*(-1);
    printf("Digite o 2º lado:\n");
    scanf("%d",&l2);
    if(l2<0)
        l2=l2*(-1);
    printf("Digite o 3º lado:\n");
    scanf("%d",&l3);
    if(l2<0)
        l3=l3*(-1);
    //printf("%d, %d, %d",l1,l2,l3);
    
    resp=valida(l1,l2,l3);
    if(resp==1)
        printf("\nTriângulo inválido");
    else
        printf("Triângulo válido");
return 0;
}

int valida(int n1, int n2, int n3)
{   
    int val1, val2, val3;
    
    if(n1>(n2+n3)||n2>(n1+n3)||n3>(n1+n2))
        return 1;
}