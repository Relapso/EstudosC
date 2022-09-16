#include <stdio.h>
 
int main() {
int funcionario, horas;
float salario, valorph;

scanf("%d %d %f", &funcionario, &horas, &valorph);

salario = valorph * horas;

printf("NUMBER = %d\n",funcionario);
printf("SALARY = U$ %.2f\n",salario);
 
    return 0;
}