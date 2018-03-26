#include <stdio.h>
int fat (int num);
int main()
{
    int num, resp;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    
    resp=fat(num);
    
    printf("Calculo fatorial(%d) = %d", num,resp);

}

/*int fat (int num)
{
    int i;
    for (i=1;num>=1;num--)
    {
        i=i*num;
    }
return i;
}
*/
int fat (int num)
{
    int i;
    for (i=1;num!=0;num--)
    {
        i=i*num;
    }
return i;
}

