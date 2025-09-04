#include <stdio.h>

int main() {
    int T,j,K[5],L[5];
    int i,count=0;
    
//     pour utiliser l'expression (int) (sizeof(a)
// / sizeof(a[0]))
  printf("Entrez un nombre : ");
  scanf("%d",&T);

  int size=(sizeof(K)/sizeof(K[0]));
 
  for(i=0; i < size; i++){
   
    
    
        K[i] = T % 10;
        T = T /10;
   
    
     printf(" k= %d\n",K[i]);
     
    }    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(K[i]==K[j]){
                L[i]=K[i];
                 count++;
            }
         
        }
       
    }
    for ( i = 0; i < count; i++)
    {
         printf("Chiffre(s) répété(s) : %d\t",L[i]);
    }
    
    


    return 0;
}