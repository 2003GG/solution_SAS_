#include<stdio.h>
#include<math.h>
int main(){

float v,p=3.14;
 float r;

printf("le reyon r : ");
scanf("%f",&r);

v =(4/3) * p *(r*r*r);
printf("le volume de de sphere : %.2f ",v);


    return 0;
}