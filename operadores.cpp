#include <stdio.h>

int main(){
	int A, B, soma, subtrai, multiplica, divisao;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtrai = A - B;
	multiplica = A * B;
	divisao = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtr.: %d.\n", subtrai);
	printf("Multiplic.: %d.\n", multiplica);
	printf("Divis.: %d.\n", divisao);
	
}
