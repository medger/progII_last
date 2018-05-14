/*
1- Crie um program a em que:
- Declara 2 variaveis inteiras A e B;
- O user entra com o valor de A e B;
1.1 O programa deverá exibir o endereço de memória alocado para as duas 
    variáveis anteriores;
1.2 Usando ponteiro, altere o valor de A para o DOBRO do valor atual, 
    exiba novamente o valor após alterado;
1.3 Imprimir o conteúdo da variavel ponteiro de int
*/

#include <stdio.h>
int main()
{
    int a,b;
    int *m, *n;
    printf("Entre com o valor de a: \n");
    scanf("%d", &a);
    printf("Entre com o valor de b: \n");
    scanf("%d", &b);
    
    m=&a;
    n=&b;
    printf("\nEndereço de A: %d", &m);
    printf("\nEndereço de B: %d", &n);
    
    *m=a*2;
    *n=b*2;
    /*há duas formas de mostrar o resultado, apontando pelo PONTEIRO (*m) ou
    pela VARIAVEL diretamente (b);
    */
    printf("\n\nDobro da variável A é: %d", *m);
    printf("\nDobro da variável B é: %d", b);
return 0;
}