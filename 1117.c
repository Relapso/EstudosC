#include <stdio.h>

int main(int argc, const char * argv[]) {
    float nota1 = 0,media,soma = 0;
    int cont = 0;
    
    while(cont < 2){
        scanf("%f",&nota1);
        if(nota1 < 0 || nota1 > 10){
            printf("nota invalida\n");
        }
            else{
                soma += nota1;
                cont++;
            }
        
    }
    media = (soma/2);
    printf("media = %.2f\n",media);
                      
    return 0;
}
