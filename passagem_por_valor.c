#include <stdio.h>
void incrementa_um(int num);
int main()
{
    int x;
    x=10;
    printf("x=%d",x);
    incrementa_um(x);
    
    printf("\nx=%d",x);
return 0;
}
void incrementa_um(int num)
{
    num=num + 1;
}