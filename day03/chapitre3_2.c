#include <stdio.h>

int main() {
    int T,j,K[5],L[5],S[10]={1,2,3,4,5,6,7,8,9};
    int i,count[10],hrep[10];
    
//     pour utiliser l'expression (int) (sizeof(a)
// / sizeof(a[0]))
  printf("Entrez un nombre : ");
  scanf("%d",&T);

  int size=(sizeof(K)/sizeof(K[0]));
 
  for(i=0; i < size; i++){
   
    
    
        K[i] = T % 10;
        T = T /10;
   
    
    //  printf(" k= %d\n",K[i]);
     
    }    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(K[i]==K[j]){
                L[i]=K[i];
                 count[i]=count[i]+1;
            }
         
        }
       
    }
    for(i=0;i<size;i++){
        for(j=0;j<10;j++){

            if(L[i]==S[j]){
            hrep[i]=hrep[i]+1;
            }
            printf(" S = %d\t\n",S[j]);
            
        }
      printf(" hrp = %d\n",hrep);
    }
    printf("\n");
    


    return 0;
}