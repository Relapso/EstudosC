#include <stdio.h>
 
int main() {
double xp=1,monstro=1,total;

while(xp!=0 && monstro !=0){
	scanf("%lf %lf",&xp, &monstro);
	total = monstro * xp;
	if(total<=0){
		break;
	}
	printf("%.0lf\n",total);

}


    return 0;
}