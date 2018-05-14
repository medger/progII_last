#include <stdio.h>
int main()
{
    printf("\nNúmero de bytes tipo int: %d bytes", sizeof(int));
    printf("\nNúmero de bytes tipo float: %d bytes", sizeof(float));
    printf("\nNúmero de bytes tipo char: %d bytes", sizeof(char));
    
    int a=10;
    int b=90;
    char letra;
    int *p; //ponteiro de int
    
    printf("\n\nEndereço da variável a = %d", &a);
    printf("\nConteúdo da variável b = %d", &b);
    printf("\nConteúdo da variável 'letra' = %d", &letra);

    p=&a;//p recebe o endereço de A
    printf("\n\nO conteúdo de p = %d",*p);
    
    *p=11; //conteúdo apontado por P recebe 11
    printf("\nValor de p = %d", a);//
    
    a++;
    printf("\nNovo conteúdo de p = %d",*p);
    
return 0;
}