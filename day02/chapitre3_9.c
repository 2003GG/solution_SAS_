#include <stdio.h>
#include <string.h>
int main() {
   char n[10];
   int i,num[30],K;
// : 1: AEILNORSTU, 2 : DG, 3 : BCMP, 4 : FHVWY, 5 : K, 8 : JX, 10 : QZ).
    printf("Entrez un mot : ");
    scanf("%s",n);

     for(i=0;i<strlen(n);i++){

     if(n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='N'||n[i]=='o',n[i]=='R'||n[i]=='S'||n[i]=='U'||n[i]=='T'){
         num[i]=1;
     }
     if(n[i]=='D'||n[i]=='G'){
         num[i]=2;
     }
     if(n[i]=='B'||n[i]=='M'||n[i]=='P'||n[i]=='C'){
         num[i]=3;
     }
      if(n[i]=='F'||n[i]=='H'||n[i]=='Y'||n[i]=='V'||n[i]=='W'){
         num[i]=4;
     }
      if(n[i]=='K'){
         num[i]=5;
     }
      if(n[i]=='J'||n[i]=='X'||n[i]=='S'){
         num[i]=8;
     }
      if(n[i]=='Q'||n[i]=='Z'){
         num[i]=10;
     }
      
    }

     for(i=0;i<strlen(n);i++){
    
    num[i]=num[i]+num[i+1];
 
     }
    printf("Valeur Scrabble : %d\n",num[i]);
    return 0;
}
