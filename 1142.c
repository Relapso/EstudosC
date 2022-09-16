#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cont,quantidade;
    
    
    scanf("%d",&quantidade);
    quantidade *= 4;
    
    for (cont=1; cont <= quantidade; cont++) {
        if(cont%4 == 0){
            printf("PUM\n");
        }
        else {
            printf("%d ",cont);
        }
    }
    
    return 0;
}
