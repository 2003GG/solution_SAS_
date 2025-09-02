
#include<stdio.h>
int main(){
int d,k,X,y,z;

printf("le montant en dollars : ");
scanf("%d",&d);

 k = d/20;
 X=(d%20)/10;
 y=(d%10)/5;
 z=(d%5)/1;
 


 printf("Entrez un montant en dollars : %d\n",d);
 printf("Billets de 20$ : %d\n",k);
 printf("Billets de 10$ : %d\n",X);
 printf("Billets de 5$ : %d\n",y);
 printf(" Billets de 1$ : %d\n",z);

    return 0;
}
