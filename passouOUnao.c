/*
https://docs.google.com/presentation/d/1FijBEv04WeBQG8nG5INlPm80sLoa3EACUD82EduNU-U/edit#slide=id.g342d4982c2_0_36
6-Crie uma função unilasalle_resultado(). 
Esta função deverá receber 3 parâmetros de entrada av1, av2 e av3 e retornar 0 ou 1:  
(1-passou, 0-não passou).
6.1- Faça um programa para testar sua função.

protótipo:
int unilasalle_resultado (float av1, float av2, float av3);
*/
#include<stdio.h>
int result(float av1, float av2, float av3);
int main()
{
    int resp;
    float av1, av2, av3;
    printf("Digite suas notas:");
    scanf("%f %f %f", &av1,&av2,&av3);
    resp=result(av1,av2,av3);
    if(resp==1)
    {
        printf("Parabens");
    }
    else
    {
        printf("Volta pra progII");
    }
}

int result(float av1, float av2, float av3)
{
    float media=6, total=0;
    total=(av1+av2+av3)/3;
    //printf("\nSua média é: %.2f \n", total);
    if(media<6)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
