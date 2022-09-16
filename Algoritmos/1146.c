

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cont, qtd;

    while (1) {
        scanf("%d", &qtd);
        if(qtd == 0){
            break;
        }
        for (cont = 1; cont < qtd; cont++) {
            printf("%d ",cont);
            
        }
        printf("%d\n",qtd);
    }
        
        
    return 0;
    }
