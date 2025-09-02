
#include<stdio.h>
int main(){
float pret,interet,pai,intmen,sold1,sold2,sold3;
printf("Entrez le montant du pret : ");
scanf("%f",&pret);
printf("Entrez le taux d'interet: ");
scanf("%f",&interet);
printf("Entrez le paiement mensuel :");
scanf("%f",&pai);
intmen=interet/100/12;
sold1=(pret-pai)+pret*intmen;
sold2=(sold1-pai)+sold1*intmen;
sold3=(sold2-pai)+sold2*intmen;
printf("Solde restant apres le premier paiement : %.2f\n",sold1);
printf("Solde restant apres le deuxieme paiement : %.2f\n",sold2);
printf("Solde restant apres le troisieme paiement : %.2f\n",sold3);
    return 0;
}
