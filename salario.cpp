#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#define sal_min 900
int main(){
	setlocale(LC_ALL, "Portuguese");
	int horas, sal_bruto;
	float salario;
	printf("Digite a quantidade de horas trabalhadas ");
	scanf("%d", &horas);
	sal_bruto = (horas*(0.10*sal_min));
	salario = sal_bruto - (sal_bruto*0.03);
	printf("Seu salario é %.2f reais", salario);	
	getch();
	return 0;
}
