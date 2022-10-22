#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	char login[10];
	char senha[10];
	char data[10];
	char cpf[10];
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Digite seu nome: ");
	scanf("%s", login);
	printf("Digite sua senha: ");
	scanf("%s", senha);
	
	if (strcmp(login, "tiago")==0 && (strcmp(senha, "153")==0))
	{
		printf("\nVocê está logado\n ");
		printf("\nDigite sua data de nascimento: ");
		scanf("%s", data);
		printf("Digite seu cpf: ");
		scanf("%s", cpf);
		
		printf("\nNome: %s\nSenha: %s\nData: %s\nCPF: %s\n", login, senha, data, cpf);
		system("pause");
		
	}
	else
	{
		printf("Falha no login! ");
		
		system("pause");
		return 0;
	}
}
