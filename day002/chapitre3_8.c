#include <stdio.h>
#include <string.h>
int main() {
   char n[10];
   int i,num[30];
//     2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV,
// 9=WXY).
        printf("Entrez un numéro de téléphone : ");
    scanf("%[^\n]s",&n);

     for(i=0;i<strlen(n);i++){
     if(n[i]=='A'||n[i]=='B'||n[i]=='C'){
         num[i]=2;
     }
     if(n[i]=='D'||n[i]=='E'||n[i]=='F'){
         num[i]=3;
     }
     if(n[i]=='G'||n[i]=='H'||n[i]=='I'){
         num[i]=4;
     }
      if(n[i]=='J'||n[i]=='K'||n[i]=='L'){
         num[i]=5;
     }
      if(n[i]=='M'||n[i]=='N'||n[i]=='O'){
         num[i]=6;
     }
      if(n[i]=='P'||n[i]=='R'||n[i]=='S'){
         num[i]=7;
     }
      if(n[i]=='T'||n[i]=='U'||n[i]=='V'){
         num[i]=8;
     }
      if(n[i]=='W'||n[i]=='X'||n[i]=='Y'){
         num[i]=9;
     }
     else 
     continue;
   
     }
 
        printf("%d",num[i]); 
     
    return 0;
}
