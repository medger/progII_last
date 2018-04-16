/*
8	Faça uma função para verificar se um ano é bissexto ou não. Utilize a regra: 
*/
#include <stdio.h>

int checaano(int ano)
{
	if(ano%4==0)
	{
		if(ano%100==0)
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else
	{
		return 3;
	}
}

int main()
{  
	int ano;
	printf("\nEntre com um ano: ");
	scanf("%d",&ano);
 
 	int x=checaano(ano);
 
	if(x==1)
	{
	 	printf("\nEste ano eh bissexto!");
	}
	else
	{
		printf("\nEste ano nao eh bissexto!");
	}
 
return 0;
}