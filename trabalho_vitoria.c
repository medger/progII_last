/*
Faça uma função que receba o tamanho de um cômodo em m² e o 
tamanho do piso em m² que será usado, e retorne a quantidade de pisos 
que será preciso para preencher todo o chão.
*/
#include <stdio.h>
float quantidade(float comodo, float piso);

int main()
{
	float piso, comodo, total;
	printf("Digite o tamanho do comodo em metros quadrados.");
	scanf("%f", &comodo);
	printf("Digite o tamanho do piso em metros quadrados.");
	scanf("%f", &piso);
    	total=quantidade(comodo, piso);
	printf("A quantidade de pisos necessaria e: %.2f", total);
	return 0;
}
float quantidade(float comodo, float piso)
{
	float total=comodo/piso;
	return total;
} 