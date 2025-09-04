// Entrez une fraction : 6/12
// Sous sa forme la plus simple : 1/2

#include <stdio.h>

int main() {
   
int i,n,k;
printf("Entrez une fraction :");
scanf("%d",&n);

for(i=1;i*i<=n;i++){
     k =i*i;
    if(k%2==0){
        printf("%d\n",k);
    }

}


    return 0;
}
