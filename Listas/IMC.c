/*
3	Faça um programa que calcule o IMC e mostre se esta de acordo com a tabela.
*/
#include<stdio.h>
float calcula(float peso, float altura);
int main()
{
    float resp, peso=0, altura=0;
    printf("\nEntre com seu peso: ");
        scanf("%f", &peso);
    printf("\nEntre com sua altura: ");
        scanf("%f", &altura);
        
    resp=calcula(peso,altura);
    
    printf("Seu IMC é: %.2f",resp);
return 0;
}

float calcula(float peso, float altura)
{
    float imc=0;
    imc=peso/(altura*altura);
    
return imc;
}