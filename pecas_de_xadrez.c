#include <stdio.h>

// Funçao recursiva que simula movimento da torre
void movimentar_torre(int movimentos){
    if (movimentos > 0) {
       printf("**A torre caminhou para a direita **\n");
       movimentar_torre(movimentos - 1);
    }
}
// Funçao recursiva que simula movimento da rainha
void movimentar_rainha(int movimentos){
    if (movimentos > 0) {
       printf("**A rainha caminhou para a esquerda**\n");
       movimentar_rainha(movimentos - 1);
    }      
}
// Funçao com loops aninhados que simula movimento do bispo
void movimentar_bispo(int movimentos){
    for (int i = 0;  i < movimentos; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("**O bispo caminhou para a direita**\n");
        }
        printf("**O bispo caminhou para a baixo**\n");
    }
}

// Funçao com loops aninhados complexos que simula movimento do cavalo
void movimentar_cavalo(int movimentos) {
    for (int i = 0, direita = 0; i < movimentos; i++, direita++) {
        for (int j = 0, cima = movimentos; j < movimentos; j++, cima--) {
            printf("**O cavalo caminhou para cima**\n");
        }
        printf("**O cavalo caminhou para a direita**\n");
        break;
    }
}


// Função principal
int main()
{
    // Declarando e inicializando as quantidades de movimentos de cada peça com valores fixos
    int qtd_movimento_torre = 5;
    int qtd_movimento_rainha = 8;
    int qtd_movimento_bispo = 5;
    int qtd_movimento_cavalo = 2;

    // Chamando as funções com seu determinado parâmetro
    movimentar_torre(qtd_movimento_torre);
    printf("\n"); 
    movimentar_rainha(qtd_movimento_rainha);
    printf("\n"); 
    movimentar_bispo(qtd_movimento_bispo);
    printf("\n"); 
    movimentar_cavalo(qtd_movimento_cavalo);
    

    // Retorna 0 para indicar que o programa terminou corretamente
    return 0;
}

