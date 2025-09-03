// chapitre 3_3
#include <stdio.h>

int main() {
   
int j,m,a,j2,m2,a2;
printf("entez le premier date : ");
scanf("%d/%d/%d",&j,&m,&a);
printf("entez le deuxieme date : ");
scanf("%d/%d/%d",&j2,&m2,&a2);
if(a<a2){
    printf("%d/%d/%d est plus tôt que %d/%d/%d\n",j,m,a,j2,m2,a2);
}
    else if(m<m2 && a<a2){
        printf("%d/%d/%d est plus tôt que %d/%d/%d\n",j,m,a,j2,m2,a2);
    }
        if(j<j2 && m<m2 && a<a2){
            printf("%d/%d/%d est plus tôt que %d/%d/%d\n",j,m,a,j2,m2,a2);
        }
    

else {
     printf("%d/%d/%d est plus tôt que %d/%d/%d\n",j2,m2,a2,j,m,a);
}
    return 0;
}