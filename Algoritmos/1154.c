#include <stdio.h>

int main(int argc, const char * argv[]) {
    int idade,soma;
    double media,cont;
    //enquanto
    
    cont = 0;
    soma = 0;
    media = 0;
    while(1){
        scanf("%d",&idade);
        if(idade < 0){
            break;
        }
        else if(idade <= 0 || idade >=0) {
            soma += idade;
            cont++;
        }
        
    }
    
    media = (soma / cont);
    
    printf("%.2lf\n",media);
    return 0;
}
