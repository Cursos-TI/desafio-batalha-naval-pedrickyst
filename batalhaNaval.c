#include <stdio.h>

#define linha 10
#define coluna 10
#define navio1 2
#define navio2 3
#define navio3 4

int main(){
    char area[10][10];

   for (int i = 0; i < linha; i++){ //criação do oceano
       for (int j = 0; j < coluna; j++){
        area[i][j] = '~';
       }       
   }   
    
    for (int i = 1; i < navio3 + 2; i++){ //barco cone
        area[9][i] = '2';

        for (int j = 0; j < navio3 - 1; j++){
            area[8][2 + j] = '2';
            area[7][3] = '2';            
        }       
                            
        }

    for (int i = 0; i < 5; i++){ //barco Cruz.
        area[1][2] = '3';
        area[2][i] = '3';
        area[3][2] = '3';

    }

    for (int i = 1; i < navio3; i++){ //barco OctaEdro.
        area[5][7] = '1';
        area[5][6] = '1';
        area[5][8] = '1';
        area[4][7] = '1';
        area[6][7] = '1';

    }

        printf("\n");
    

    printf("   ");
     for (char letra = 'A'; letra <= 'J'; letra++){
        printf("%2c", letra);
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