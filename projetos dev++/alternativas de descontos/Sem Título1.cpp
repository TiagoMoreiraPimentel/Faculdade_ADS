#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{	
	setlocale(LC_ALL, "Portuguese_Brazil");
	char x;
	float  valor, total, desc;
	
	do {
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("O valor da sua compra é de R$%2.f\n ", valor);
	printf("Digite uma opção de desconto: ");
	printf("\na: 10%%\nb: 20%%\nc: 30%% \n\nDigite sua opção:");
	scanf("%s", &x);
	
	switch (x) {
	case 'a':
		printf("você escolheu a letra 'a' seu desconto é de 10%%\n");
		desc = 10;
		break;
	case 'b':
		printf("você escolheu a letra 'b' seu desconto é de 20%%\n");
		desc = 20;
		break;
	case 'c':
		printf("você escolheu a letra 'c' seu desconto é de 30%%\n");
		desc = 30;
		break;
	default:
		printf("você escolheu uma opção invalida, seu desconto é de 0%%\n");
		desc = 0;
	}
	total = valor - (valor * desc / 100);
	printf("\n\n O valor da sua compra é R$ %.2f\n\n", total);
}	while (x);
	printf("fim das operações");

			
return 0;
}

