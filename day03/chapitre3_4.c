#include <stdio.h>
// challenge 04 in day 03
int main() {
    int T, j, K[10];
    int i;
    int rep[10] = {0}; 
    int S[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(K)/sizeof(K[0]);

    printf("Entrez un nombre de 10 chiffre: ");
    scanf("%d", &T);

   if(T<=0){
       printf("ERROR\n");
       return 0;
   }
   if(T>0){
    for (i = 0; i < size; i++) {
        K[i] = T % 10;
        T = T / 10;
        
    }
    

   
    for (i = size-1; i >= 0; i--) {
        for (j = 0; j < size; j++) {
            if (K[i] == S[j]) {
                rep[j]++;
            }
        }
    }


    printf("Chiffre    : ");
    for (i = 0; i < size; i++) {
        printf("%d\t", S[i]);
    }

    printf("\nRepetition : ");
    for (i = 0; i < size; i++) {
        printf("%d\t", rep[i]);
    }
   }

    printf("\n");

    return 0;
}