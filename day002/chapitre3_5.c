// chapitre 3_1
#include <stdio.h>
// Entrez deux entiers : 12 28
// Le plus grand commun diviseur est : 4
int main() {
   int a,b,count=0,S,S1;
   printf("Entrez deux entiers :");
   scanf("%d\t%d",&a,&b);
   while(a%2==0 && b%2==0){
    a=a/2;
    b=b/2;
    count=count+2;
   }
printf("Le plus grand commun diviseur est : %d",count);
    return 0;
}