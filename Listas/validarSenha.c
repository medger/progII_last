/*
4	Faça um função para validar usuário e senha de usuário. 
Caso senha esteja correta informe.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char secreta[10] = "1234";
	char senha[10];
	
	printf("\nEntre com a senha:");
	gets(senha);
	
	if(!strcmp(senha,secreta)) 
		printf("\nSenha correta, sistema liberado");
	else
		printf("\nSenha incorreta, sistema travado");
	
	return 0;
}