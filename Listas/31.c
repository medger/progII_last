#include <stdio.h>
float mdf(float nota1, float nota2, float nota3);
int main ()
{
    float nota1, nota2, nota3;
    printf("\n Informe a nota da av1, av2 e av3.");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
   mdf(nota1, nota2, nota3);
    
}
float mdf(float nota1, float nota2, float nota3)
{ 
    float media = 0;
    if (nota1 < nota2 && nota1 < nota3) 
    {
        media = (nota2 + nota3)/2;
    } 
    else if (nota2 < nota1 && nota2 < nota3) 
    {
        media = (nota1 + nota3)/2;
    } 
    else 
    {
        media = (nota1+ nota2)/2;
    }
        
    printf("media:%f",media);
    
}