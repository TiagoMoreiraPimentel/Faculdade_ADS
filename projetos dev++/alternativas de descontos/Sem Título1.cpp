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
	printf("O valor da sua compra � de R$%2.f\n ", valor);
	printf("Digite uma op��o de desconto: ");
	printf("\na: 10%%\nb: 20%%\nc: 30%% \n\nDigite sua op��o:");
	scanf("%s", &x);
	
	switch (x) {
	case 'a':
		printf("voc� escolheu a letra 'a' seu desconto � de 10%%\n");
		desc = 10;
		break;
	case 'b':
		printf("voc� escolheu a letra 'b' seu desconto � de 20%%\n");
		desc = 20;
		break;
	case 'c':
		printf("voc� escolheu a letra 'c' seu desconto � de 30%%\n");
		desc = 30;
		break;
	default:
		printf("voc� escolheu uma op��o invalida, seu desconto � de 0%%\n");
		desc = 0;
	}
	total = valor - (valor * desc / 100);
	printf("\n\n O valor da sua compra � R$ %.2f\n\n", total);
}	while (x);
	printf("fim das opera��es");

			
return 0;
}

