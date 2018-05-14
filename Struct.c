#include <stdio.h>
struct reg_hora{
    int hora;
    int min;
    int seg;
};

int main()
{
    struct reg_hora hora;
    int novo_min;
    
    printf("Entre com a hora\n");
    scanf("%d", &hora.hora);
    printf("Entre com os minutos\n");
    scanf("%d", &hora.min);
    printf("Entre com os seguntos\n");
    scanf("%d", &hora.seg);
    
    printf("Entre com os minutos a adicionar:\n");
    scanf("%d", &novo_min);
    
    hora.min+=novo_min;
    
    printf("\n\nNova hora: %d:%d:%d", hora.hora, hora.min, hora.seg);
return 0;
    
    
}