
#include<stdio.h>
int main(){
int d,k,X,y,z;

printf("le montant en dollars : ");
scanf("%d",&d);

 k = d/20;
 X=k/10;
 z=X/5;
 y=z/1;

 printf("Entrez un montant en dollars : %d\n",d);
 printf("Billets de 20$ : %d\n",k);
 printf("Billets de 10$ : %d\n",X);
 printf("Billets de 5$ : %d\n",z);
 printf(" Billets de 1$ : %d\n",y);
    return 0;
}
// Billets de 20$ : 4
// Billets de 10$ : 1
// Billets de 5$ : 0
// Billets de 1$ : 3