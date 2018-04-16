/*TROQUE DOIS NÚMEROS USANDO CHAMADA POR REFERÊNCIA (ENDEREÇO) EM C*/
#include <stdio.h>
void swap (int *a, int *b );
int main()
{ 
    int num1 , num2 ;
     
    printf ("Digite o valor de num1: "); 
    scanf ("%d", &num1 ); 
    printf ("Digite o valor de num2: "); 
    scanf ("%d", &num2 );
     
    // imprime valores antes de trocar 
    printf ("Antes de trocar : num1 = %d , num2 = %d \n", num1, num2);
     
    // chama a função passando endereços de num1 e num2 
    swap (&num1, &num2);
     
    // imprime valores após a troca de 
    printf ("Depois da troca : num1 = %d , num2 = %d \n",num1 ,num2);
     
    return  0 ; 
}
void swap (int *a, int *b ) 
{ 
    int t ; 
     t = *a; 
    *a = *b; 
    *b = t; 
}