// ((((3x+2)x–5)x–1)x+7)x–6

#include<stdio.h>
#include<math.h>
int main(){

float x,K;
printf(" la valure de x : ");
scanf("%f",&x);

K= ((((3*x+2)*x-5)*x-1)*x-7)*x-6;
printf("le resultat est : %2.f",K);

    return 0;
}