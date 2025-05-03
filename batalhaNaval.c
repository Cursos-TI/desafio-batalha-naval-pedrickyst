#include <stdio.h>

void iniciograde(char grade[10][10]){

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++){
            grade[i][j] = '0';
        }
        
    }
    
}

void ExibicaoGrade(char grade[10][10]){
    printf("   ");
    for (char letra = 'A'; letra < 'A' + 10; letra++){
        printf(" %c", letra);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++){
            printf("%c ", grade[i][j]);
        }
        printf("\n");        
    }    
}

int main(){

    printf(" ### BATALHA NAVAL ###\n");

    char grade[10][10];
    iniciograde(grade);
    ExibicaoGrade(grade);



    return 0;
}