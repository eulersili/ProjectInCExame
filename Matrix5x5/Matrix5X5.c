/*
Crie um programa em C, capaz de calcular uma matriz 5x5.
O programa deve solicitar ao usuário vários valorespara formar a matriz.
Em seguida, deve somar todos os quadrados perfeitos que estiverem na matriz.
*/

#include <stdio.h>
#include <math.h>

#define SIZE 5

void preencherMatriz(int matriz[SIZE][SIZE]) {
    printf("Digite os valores para preencher a matriz 5x5:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    printf("\nMatriz 5x5:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int ehQuadradoPerfeito(int num) {
    int raiz = sqrt(num);
    return (raiz * raiz == num);
}

int calcularSomaQuadradosPerfeitos(int matriz[SIZE][SIZE]) {
    int soma = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (ehQuadradoPerfeito(matriz[i][j])) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int main() {
    int matriz[SIZE][SIZE];
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Ver a matriz\n");
        printf("2. Ver a soma dos quadrados perfeitos\n");
        printf("3. Ver a matriz e a soma dos quadrados perfeitos\n");
        printf("4. Calcular o quadrado perfeito\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                preencherMatriz(matriz);
                imprimirMatriz(matriz);
                break;
            case 2:
                printf("A soma dos quadrados perfeitos é: %d\n", calcularSomaQuadradosPerfeitos(matriz));
                break;
            case 3:
                preencherMatriz(matriz);
                imprimirMatriz(matriz);
                printf("\nA soma dos quadrados perfeitos é: %d\n", calcularSomaQuadradosPerfeitos(matriz));
                break;
            case 4:
                printf("Digite um número para verificar se é quadrado perfeito: ");
                int numero;
                scanf("%d", &numero);
                if (ehQuadradoPerfeito(numero)) {
                    printf("%d é um quadrado perfeito.\n", numero);
                } else {
                    printf("%d não é um quadrado perfeito.\n", numero);
                }
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
