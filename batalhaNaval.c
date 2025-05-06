#include <stdio.h>


int main(){
    char area[10][10];
    char barco[10][10];

   for (int i = 0; i < 10; i++){ 
       for (int j = 0; j < 10; j++){
        area[i][j] = '0';
       }       
   }   
    
    for (int i = 1; i < 4; i++){
        area[8][i] = '3';
    }

    for (int i = 1; i < 4; i++){
        area[i][3] = '3';
    }

        printf("\n");
    

    printf("  ");
     for (char letra = 'A'; letra <= 'J'; letra++){
        printf(" %1c", letra);
     }
     printf("\n");

     for (int i = 0; i < 10; i++){
        printf("%3d ", i+1);
        for (int j = 0; j < 10; j++){
            printf("%c ", area[i][j]);
        }
        printf("\n");
     }
     
     

        return 0;
}