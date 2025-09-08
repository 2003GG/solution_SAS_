#include <stdio.h>
#include <ctype.h>
#include <string.h>

// challenge 06 in day 03
int main() {
    char mess[20];
    int n[10],i;


printf("entrez le messaje : ");
scanf("%s",mess);

printf("En B1FF-speak : ");
for (i = 0; i < strlen(mess); i++) {
        char c = toupper(mess[i]);

       
        switch (c) {
            case 'A': 
            putchar('4');
            break;
            case 'B':
            putchar('8'); 
            break;
            case 'E': 
            putchar('3');
            break;
            case 'I': 
            putchar('1'); 
            break;
            case 'O': 
            printf('0'); 
            break;
            case 'S': 
            putchar('5');
            break;
            default:
            putchar(c);
            break;  
        }
    }
 

for (i = 0; i < 10; i++) {
        printf("!");
    }

        
    
    return 0;
}