#include <stdio.h>
 
int main() {
char nome[30];
double salario,vendas, bonus;


scanf("%s",&nome);

scanf("%lf %lf",&salario,&vendas);

bonus = vendas*0.15;

salario += bonus;

printf("TOTAL = R$ %.2lf\n",salario);

    return 0;
}