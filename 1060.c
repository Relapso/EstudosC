#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cont,testes;
    float n1,n2,n3, media;

    printf("Digite a quantidade de testes: ");
    scanf("%d",&testes);
    n1=0;
    n2=0;
    n3=0;
        for (cont = 1; cont <= testes; cont++){
        printf("Digite as notas: \n");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1*2 + n2*3 + n3*5) /10;
        printf("a media é %.1f\n",media);
        n1=0;
        n2=0;
        n3=0;
        }
    return 0;
}
