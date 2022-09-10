#include<stdio.h>

int main()
{
    int x = 1,cont, soma;

    while(x != 0)   
    {
            scanf("%d", &x);
            soma = 0;
            if(x == 0)
            {
                 break;
            }
            for(cont = 0; cont < 10; cont++)
            {
                  if(x % 2 == 0)
                  {
                       soma = soma + x;
                  }
                  x++;
            }
            printf("%d\n", soma);
    }

    return(0);
}