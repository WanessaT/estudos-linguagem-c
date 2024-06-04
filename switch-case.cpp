// switch-case só compara igualdade, não executa maior/menor 

#include <stdio.h>
#include <locale.h>


int main(){
	
	int dia;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-feira.\n");
			break;
		case 3:
			printf("Terça-feira.\n");
			break;
		case 4:
			printf("Quarta-feira.\n");
			break;
		case 5:
			printf("Quinta-feira.\n");
			break;
		case 6:
			printf("Sexta-feira.\n");
			break;
		case 7:
			setlocale(LC_ALL, "Portuguese");
			printf("Sábado.\n");
			break;
		default:
			setlocale(LC_ALL, "Portuguese");
			printf("Valor inválido!");
			break;
	}
}
