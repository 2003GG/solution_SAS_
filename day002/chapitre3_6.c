// Entrez une fraction : 6/12
// Sous sa forme la plus simple : 1/2

#include <stdio.h>

int main() {
   
int x,y,i;
printf("Entrez une fraction :");
scanf("%d/%d",&x,&y);
for(i=1;i<=x && i<=y;i++){
    if(x%i==0 && y%i==0){
x=x/i;
y=y/i;
    }
}


printf("%d/%d\n",x,y);
    return 0;
}
