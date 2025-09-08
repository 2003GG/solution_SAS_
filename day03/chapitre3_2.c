#include <stdio.h>

int main() {
    int T, j, K[10];
    int i;
    int rep[10] = {0}; 
    int S[10] = {0,1,2,3,4,5,6,7,8,9};
    
    printf("Entrez un nombre de 10 chiffre: ");
    scanf("%d", &T);

   
    for (i = 0; i < 10; i++) {
        K[i] = T % 10;
        T = T / 10;
    }

   
    for (i = 9; i >= 0; i--) {
        for (j = 0; j < 10; j++) {
            if (K[i] == S[j]) {
                rep[j]++;
            }
        }
    }


    printf("Chiffre    : ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", S[i]);
    }

    printf("\nRepetition : ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", rep[i]);
    }

    printf("\n");

    return 0;
}