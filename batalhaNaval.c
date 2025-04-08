#include <stdio.h>
#define navio 3

#define tabuleiro 10

int main(){
    //declarando variaveis 
    int numero = 1;
    char letra [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int matriz [10][10];
    // criando tabuleiro zerado
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matriz [i][j] = 0;
        }
    }
    //Escolhendo o local dos navios
    for (int i = 0; i < navio; i ++){
        matriz [4][3 + i] = 3;
    }

    for (int i = 0; i < navio; i++){
        matriz [5 + i][7] = 3;      
    }
    for (int i = 0; i < navio; i++){
        matriz [i][8 - i] = 3;
    }     
    for (int i = 0; i < navio; i++){
        matriz [i][ i + 1] = 3;
    }
    // Imprimindo o jogo 
    printf("Tabuleiro Batalha Naval\n");
    printf("   "); // Ajustei o alinhamento
    for (int j = 0; j < tabuleiro; j++){
    printf(" %c ", letra [j]); 
    }
    printf("\n");

    for (int i = 0; i < tabuleiro; i++){
    printf("%2d", numero);
    numero ++;

    for (int j = 0; j < tabuleiro; j++){
        printf(" %2d", matriz [i][j]);
    }
    printf("\n");
}

return 0;

}