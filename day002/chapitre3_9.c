#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   char n[10];
   int i,num[30],K;
   int Valeur_Scrabble = 0;
// : 1: AEILNORSTU, 2 : DG, 3 : BCMP, 4 : FHVWY, 5 : K, 8 : JX, 10 : QZ).
    printf("Entrez un mot : ");
    scanf("%s",n);

     for(i=0;i<strlen(n);i++){

     if(toupper(n[i]) =='A'||toupper(n[i])=='E'||toupper(n[i])=='I'||toupper(n[i])=='N'||toupper(n[i])=='o'|| toupper(n[i])=='R'||toupper(n[i])=='S'||toupper(n[i])=='U'||toupper(n[i])=='T'||toupper(n[i])=='L'){
        Valeur_Scrabble += 1; 
     }
     if(toupper(n[i])=='D'||toupper(n[i])  =='G'){
        Valeur_Scrabble += 2; 
     }
     if(toupper(n[i])=='B'||toupper(n[i])=='M'||toupper(n[i])=='P'||toupper(n[i])=='C'){
        Valeur_Scrabble += 3; 
     }
      if(toupper(n[i])=='F'||toupper(n[i])=='H'||toupper(n[i])=='Y'||toupper(n[i])=='V'||toupper(n[i])=='W'){
        Valeur_Scrabble += 4; 
     }
      if(toupper(n[i])=='K'){
          Valeur_Scrabble += 5; 
     }
      if(toupper(n[i])=='J'|toupper(n[i])  =='X'||toupper(n[i])=='S'){
        Valeur_Scrabble += 8; 
     }
      if(toupper(n[i])=='Q'||toupper(n[i])=='Z'){
         Valeur_Scrabble += 10; 
     }
      
    }

     
   printf("Valeur Scrabble : %d\n",Valeur_Scrabble);
    return 0;
}
