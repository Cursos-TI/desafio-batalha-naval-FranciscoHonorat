#include <stdio.h>

void exibirTabuleiro(int tabuleiro[10][10]){
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiros[10][10];
    int i, j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            tabuleiros[i][j] = 0;
        }
    }
    //Posicione dois navios no tabuleiro
    //Navio horizontal sendo exibido separadamente.
    tabuleiros[2][1] = 1;
    tabuleiros[2][2] = 1;
    tabuleiros[2][3] = 1;

    //Navio vertical sendo exibido separadamente.
    printf("\n");
    tabuleiros[3][4] = 1;
    tabuleiros[4][4] = 1;
    tabuleiros[5][4] = 1;

    //Navio na diagonal sendo exibido separadamente.
    tabuleiros[6][1] = 1;
    tabuleiros[7][2] = 1;
    tabuleiros[8][3] = 1;

    //Navio na diagonal sendo exibido separadamente.
    tabuleiros[1][6] = 1;
    tabuleiros[2][7] = 1;
    tabuleiros[3][8] = 1;

    printf("Tabuleiro de batalha naval\n");
    exibirTabuleiro(tabuleiros);

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    printf("\nHabilidade em cone:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em octaedro:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em cruz:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
