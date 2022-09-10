#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c1,c2,c3,c4, cont=0;
    
    scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
    
    if(c1 == 1){
        cont=1;
    }
    if(c2 == 1){
        cont=2;
    }
    if(c3 == 1){
        cont=3;
    }
    if(c4 == 1){
        cont=4;
    }

printf("%d\n",cont);

    return 0;
}
