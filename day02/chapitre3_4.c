
#include <stdio.h>
// : A = 90–100, B = 80–89, C = 70–79, D = 60–69,
// F = 0–59.
int main() {
    int n,l;

    printf(" Entrez une note numérique : ");
    scanf("%d",&n);
   
  
    if (n>100 || n<0 ){
    printf("ERROR");
    return 0;
    }
    if(n==100){
     printf("Note littérale : A");
       return 0;
    }
   l=n/10;
    switch (l)
    {
   case 9:
      printf("Note littérale : A");
      break;
   
        case 8:
        printf("Note littérale : B");
    break;
    case 7:
  printf("Note littérale : C");
  break;
  case 6:
   printf("Note littérale : D");
   break;

   default :
   if(n<=59 && n>=0){

    printf("Note littérale : E");
   }
    
  
   }
 
  


    return 0;
}