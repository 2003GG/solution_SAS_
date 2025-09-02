#include<stdio.h>
#include<math.h>
int main(){

float x,K;
printf(" la valure de x : ");
scanf("%f",&x);

K= 3*(x*x*x*x*x)+2*(x*x*x*x)+5*(x*x*x)-(x*x)+7*x-6;
printf("le resultat est : %2.f",K);

    return 0;
}