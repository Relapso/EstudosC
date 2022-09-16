#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int frangodisp, bifedisp, massadisp,soma=0;
    int frangoped, bifeped, massaped;
    
        scanf("%d %d %d", &frangodisp, &bifedisp, &massadisp);
        scanf("%d %d %d", &frangoped, &bifeped, &massaped);
    
    if (frangoped > frangodisp){
        soma += frangoped - frangodisp;
        }
    if  (bifeped > bifedisp){
        soma += bifeped - bifedisp;
    }
    
    if (massaped > massadisp){
        soma += massaped - massadisp;
    }
    
    printf("%d\n",soma);
        
    
    return 0;
}