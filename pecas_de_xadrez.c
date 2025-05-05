#include <stdio.h>

int main()
{
    // Declarando variáveis para armazenar a quantidade de movimentos de cada peça
    int qtd_movimento_torre, qtd_movimento_bispo, qtd_movimento_rainha;
    int contador_passos_rainha, contador_passos_bispo;

    // Inicializando as quantidades de movimentos de cada peça com valores fixos
    qtd_movimento_torre = 5;
    qtd_movimento_bispo = 5;
    qtd_movimento_rainha = 8;

    // Laço 'for' para simular os movimentos da torre
    // A torre caminha para a direita de 1 até a quantidade definida (5 passos)
    for (int i = 1; i <= qtd_movimento_torre; ++i)
    {
        printf("** A torre caminhou %d passo(s) para a direita **\n", i);
    }

    // Inicializa o contador de passos da rainha
    contador_passos_rainha = 1;

    // Laço 'do-while' para simular os movimentos da rainha
    // A rainha caminha para a esquerda até atingir a quantidade definida (8 passos)
    do
    {
        printf("** A rainha caminhou %d passo(s) para a esquerda **\n", contador_passos_rainha);
        contador_passos_rainha++;
    } while (contador_passos_rainha <= qtd_movimento_rainha);

    // Inicializa o contador de passos do bispo
    contador_passos_bispo = 1;

    // Laço 'while' para simular os movimentos do bispo
    // O bispo caminha na diagonal (para cima e para a esquerda) até 5 passos
    while (contador_passos_bispo <= qtd_movimento_bispo)
    {
        printf("** O bispo caminhou %d passo(s) para cima e para a esquerda **\n", contador_passos_bispo);
        contador_passos_bispo++;
    }

    // Retorna 0 para indicar que o programa terminou corretamente
    return 0;
}
