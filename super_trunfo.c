#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

void compararAtributoSimples(Carta c1, Carta c2) {
    int escolha;

    printf("Desafio 1 - Comparação simples\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Força\n");
    printf("2 - Velocidade\n");
    printf("3 - Inteligência\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (c1.forca > c2.forca)
            printf("%s vence em Força!\n", c1.nome);
        else if (c1.forca < c2.forca)
            printf("%s vence em Força!\n", c2.nome);
        else
            printf("Empate em Força!\n");
    } else if (escolha == 2) {
        if (c1.velocidade > c2.velocidade)
            printf("%s vence em Velocidade!\n", c1.nome);
        else if (c1.velocidade < c2.velocidade)
            printf("%s vence em Velocidade!\n", c2.nome);
        else
            printf("Empate em Velocidade!\n");
    } else if (escolha == 3) {
        if (c1.inteligencia > c2.inteligencia)
            printf("%s vence em Inteligência!\n", c1.nome);
        else if (c1.inteligencia < c2.inteligencia)
            printf("%s vence em Inteligência!\n", c2.nome);
        else
            printf("Empate em Inteligência!\n");
    } else {
        printf("Atributo inválido!\n");
    }
}

void compararAtributoMenu(Carta c1, Carta c2) {
    int escolha;

    printf("\nDesafio 2 - Menu interativo com múltiplos atributos\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (c1.forca > c2.forca)
                printf("%s vence em Força!\n", c1.nome);
            else if (c1.forca < c2.forca)
                printf("%s vence em Força!\n", c2.nome);
            else
                printf("Empate em Força!\n");
            break;
        case 2:
            if (c1.velocidade > c2.velocidade)
                printf("%s vence em Velocidade!\n", c1.nome);
            else if (c1.velocidade < c2.velocidade)
                printf("%s vence em Velocidade!\n", c2.nome);
            else
                printf("Empate em Velocidade!\n");
            break;
        case 3:
            if (c1.inteligencia > c2.inteligencia)
                printf("%s vence em Inteligência!\n", c1.nome);
            else if (c1.inteligencia < c2.inteligencia)
                printf("%s vence em Inteligência!\n", c2.nome);
            else
                printf("Empate em Inteligência!\n");
            break;
        default:
            printf("Atributo inválido!\n");
            break;
    }
}

void compararDoisAtributos(Carta c1, Carta c2) {
    int a1, a2;
    int total1 = 0, total2 = 0;

    printf("\nDesafio 3 - Comparação de dois atributos (com ternário)\n");
    printf("Escolha dois atributos para comparar (1-Força, 2-Velocidade, 3-Inteligência):\n");
    printf("Atributo 1: ");
    scanf("%d", &a1);
    printf("Atributo 2: ");
    scanf("%d", &a2);

    total1 += (a1 == 1) ? c1.forca : (a1 == 2) ? c1.velocidade : c1.inteligencia;
    total1 += (a2 == 1) ? c1.forca : (a2 == 2) ? c1.velocidade : c1.inteligencia;

    total2 += (a1 == 1) ? c2.forca : (a1 == 2) ? c2.velocidade : c2.inteligencia;
    total2 += (a2 == 1) ? c2.forca : (a2 == 2) ? c2.velocidade : c2.inteligencia;

    printf("\nResultado: %s [%d] x %s [%d]\n", c1.nome, total1, c2.nome, total2);

    printf("%s\n", (total1 > total2) ? c1.nome :
                   (total1 < total2) ? c2.nome :
                   "Empate!");
}

int main() {
    // Cartas de exemplo
    Carta jogador = {"Dragão Flamejante", 90, 70, 60};
    Carta inimigo = {"Fera Gélida", 80, 80, 75};

    printf("=== SUPER TRUNFO DIGITAL - TECHNOVA ===\n");
    printf("Jogador: %s | Inimigo: %s\n\n", jogador.nome, inimigo.nome);

    compararAtributoSimples(jogador, inimigo);
    compararAtributoMenu(jogador, inimigo);
    compararDoisAtributos(jogador, inimigo);

    return 0;
}
