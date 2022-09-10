#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int cont, N, result,aux;
    
    scanf("%d",&N);
    for (cont = 1; cont <= N; cont++){
        result = cont*cont;
        aux = result*cont;
        printf("%d %d %d\n",cont, result, aux);
        
        }
    return 0;
}

