#include <stdio.h>
#include <math.h>

int main() {
    double raio;
    
    scanf("%lf", &raio);
    printf("VOLUME = %.3lf\n", 3.14159 * 4/3 * pow(raio, 3.0));
    
    return 0;
}