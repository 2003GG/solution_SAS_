
#include<stdio.h>
// Heure de départ  Heure d'arrivée
// 8h00 a.m. 10h16 a.m.
// 9h43 a.m. 11h52 a.m.
// 11h19 a.m. 1h31 p.m.
// 12h47 p.m. 3h00 p.m.
// 2h00 p.m. 4h08 p.m.
// 3h45 p.m. 5h55 p.m.
// 7h00 p.m. 9h20 p.m.
// 9h45 p.m. 11h58 p.m.
int main(){
    int m,h,S;
    int v1,v2,v3,v4;
printf("Entrez une heure (24h) : ");
scanf("%d",&h,&m);
S=h*60+m;
if(S>=480 && S<=616){
    printf("Heure de départ : 08h00 a.m\n");
    printf("Heure d'arrivée : 11h52 a.m\n");

}
if(S>=583 && S<=712){
     printf("Heure de départ : 9h43 a.m.\n");
    printf("Heure d'arrivée : 11h52 a.m.\n");

}
if(S>=679 && S<=91){
     printf("Heure de départ : 11h19 a.m.\n");
    printf("Heure d'arrivée : 1h31 p.m.\n");

}
if(S>=767 && S<=180){
     printf("Heure de départ :  12h47 p.m.\n");
    printf("Heure d'arrivée : 3h00 p.m.\n");

}




    return 0;
}