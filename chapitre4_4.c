#include<stdio.h>
#include<math.h>
int main(){

float a,c,b;

printf("entre le montant : ");
scanf("%f",&a);
b=(a*5)/100;
c = a+b ;

printf("Avec taxe ajoutee: %.2f",c);

    return 0;
} 