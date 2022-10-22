#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salario, gympess, total;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	gympess = 45;
	total = salario - gympess;
	
	printf("\n Salario: %2.f", salario);
	printf("\n Desconto gympess: %2.f", gympess);
	
	if (total >= 2000);
		printf("\n Valor com descontos: %2.f", total);
		
	
	
	return 0;
}
