#include <stdio.h>
 
int main() {
float a, b, c;
    float aux;
    
    scanf ("%f %f %f",&a, &b, &c);
    if (a < b){
        aux = a;
        a = b;
        b = aux;
    }
    
    if (a < c){
        aux = a;
        a = c;
        c = aux;
    }
    
    if (b < c){
        aux = b;
        b = c;
        c = aux;
    }
    

    if(a >= b+c){
    printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if (a*a == b*b + c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    if (a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a < (b*b + c*c)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(a == b && a==c && a==c && b==a && b==c && c==a && c==b){
        printf("TRIANGULO EQUILATERO\n");
    }
    else{
    if (a == b || b == c || c == a) {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    }
    return 0;
}
