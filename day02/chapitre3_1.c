// chapitre 3_1
#include <stdio.h>

int main() {
    int ISBN,d2,d3,d4,d5;
    printf("Entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d",&ISBN,&d2,&d3,&d4,&d5);
    
    
    printf("Prefixe GS1 : %d\n",ISBN);
    printf("Identifiant de groupe : %d\n",d2);
    printf("Code de l'éditeur : %d\n",d3);
    printf("Numéro d'article : %d\n",d4);
    printf("Chiffre de contrôle : %d\n",d5);
    

    return 0;
}