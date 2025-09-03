// chapitre 3_2
#include <stdio.h>

int main() {
   
   int N,D,D1;
    printf("Entrez un nombre à deux chiffres : ");
    scanf("%d",&N);
    D=N/10;
    D1=N%10;
     printf("Le nombre inversé est :%d%d",D1,D);
   
 
    return 0;
}