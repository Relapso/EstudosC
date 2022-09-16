#include <stdio.h>
 
int main() {
int codigo1, qtd1, codigo2, qtd2;
float valor1, valor2, total;
  
  //o scan pode ser feito em uma linha só
  
  scanf("%d %d %f", &codigo1, &qtd1, &valor1);
  
  scanf("%d %d %f", &codigo2, &qtd2, &valor2);
  
  
  total = qtd1*valor1 + qtd2*valor2;
  
  printf("VALOR A PAGAR: R$ %.2f\n",total);
  
  //%.2f pois sao duas casas decimais a separaçao vem do .2
  
    return 0;
}