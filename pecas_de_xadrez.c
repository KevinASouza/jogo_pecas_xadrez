#include <stdio.h>

int main()
{
    // Declarando variáveis para armazenar a quantidade de movimentos de cada peça
    int qtd_movimento_torre, qtd_movimento_bispo, qtd_movimento_rainha, qtd_movimento_cavalo;
    int contador_passos_rainha, contador_passos_bispo, contador_passos_cavalo;

    // Inicializando as quantidades de movimentos de cada peça com valores fixos
    qtd_movimento_torre = 5;
    qtd_movimento_bispo = 5;
    qtd_movimento_rainha = 8;
    qtd_movimento_cavalo = 2;

    // Laço 'for' para simular os movimentos da torre
    // A torre caminha para a direita de 1 até a quantidade definida (5 passos)
    for (int i = 1; i <= qtd_movimento_torre; ++i)
    {
        printf("** A torre caminhou para a direita **\n", i);
    }
    printf("\n");

    // Inicializa o contador de passos da rainha
    contador_passos_rainha = 1;

    // Laço 'do-while' para simular os movimentos da rainha
    // A rainha caminha para a esquerda até atingir a quantidade definida (8 passos)
    do
    {
        printf("** A rainha caminhou para a esquerda **\n");
        contador_passos_rainha++;
    } while (contador_passos_rainha <= qtd_movimento_rainha);
    printf("\n");

    // Inicializa o contador de passos do bispo
    contador_passos_bispo = 1;

    // Laço 'while' para simular os movimentos do bispo
    // O bispo caminha na diagonal (para cima e para a esquerda) até 5 passos
    while (contador_passos_bispo <= qtd_movimento_bispo)
    {
        printf("** O bispo caminhou para cima e para a esquerda **\n");
        contador_passos_bispo++;
    }
    printf("\n");

    // Inicializa o contador de passos do cavalo
    contador_passos_cavalo = 1;

    // Laços aninhados para simular o movimento em L do cavalo
    for (int i = 1; i < qtd_movimento_cavalo ; ++i)
    {
        do{
            printf("** O cavalo caminhou para baixo **\n");
            contador_passos_cavalo++;

        }while(contador_passos_cavalo <= qtd_movimento_cavalo);

        printf("** O cavalo caminhou para a esquerda **\n");
    }

    // Retorna 0 para indicar que o programa terminou corretamente
    return 0;
}

