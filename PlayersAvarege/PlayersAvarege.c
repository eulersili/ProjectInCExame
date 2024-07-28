/*
Em uma competi��o de salto em dist�ncia cada atleta tem
direito a cinco saltos. No final da s�rie de saltos de cada
atleta, o melhor e o pior resultados s�o eliminados.O seu
resultado fica sendo a m�dia dos tr�s valores restantes.
Voc� deve fazer um programa que receba o nome e as
cinco dist�ncias alcan�adas pelo atleta em seus saltos e
depois informe a m�dia dos saltos conforme a descri��o
acima informada (retirar o melhor e o pior salto e depois
calcular a m�dia).Fa�a uso de uma lista para armazenar
os saltos. Os saltos s�o informados na ordem da
execu��o, portanto n�o s�o ordenados. O programa deve
ser encerrado quando n�o for informado o nome do atleta.
A sa�da do programa deve ser conforme o exemplo
abaixo: Atleta: Rodrigo Curv�llo.
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m
Melhor salto: 6.5 m
Pior salto: 5.3 m
M�dia dos demais saltos: 5.9 m
Resultado final:
Rodrigo Curv�llo: 5.9 m
*/

#include <stdio.h>
#include <string.h>

#define NUM_SALTOS 5

int main() {
    char nome[50];
    float saltos[NUM_SALTOS];

    printf("Digite o nome do atleta (ou digite 'fim' para encerrar): ");
    scanf("%s", nome);

    while (strcmp(nome, "fim") != 0) {
        // Ler os saltos
        for (int i = 0; i < NUM_SALTOS; ++i) {
            printf("Informe a dist�ncia do %do salto: ", i + 1);
            scanf("%f", &saltos[i]);
        }

        // Encontrar melhor e pior salto
        float melhorSalto = saltos[0], piorSalto = saltos[0];
        for (int i = 1; i < NUM_SALTOS; ++i) {
            if (saltos[i] > melhorSalto)
                melhorSalto = saltos[i];
            if (saltos[i] < piorSalto)
                piorSalto = saltos[i];
        }

        // Calcular m�dia dos demais saltos
        float somaDemaisSaltos = 0;
        for (int i = 0; i < NUM_SALTOS; ++i) {
            if (saltos[i] != melhorSalto && saltos[i] != piorSalto)
                somaDemaisSaltos += saltos[i];
        }
        float mediaDemaisSaltos = somaDemaisSaltos / (NUM_SALTOS - 2);

        // Imprimir resultados
        printf("\n%s:\n", nome);
        for (int i = 0; i < NUM_SALTOS; ++i) {
            printf("Salto %d: %.1f m\n", i + 1, saltos[i]);
        }
        printf("Melhor salto: %.1f m\n", melhorSalto);
        printf("Pior salto: %.1f m\n", piorSalto);
        printf("M�dia dos demais saltos: %.1f m\n", mediaDemaisSaltos);
        printf("Resultado final:\n%s: %.1f m\n\n", nome, mediaDemaisSaltos);

        // Pedir pr�ximo nome de atleta ou encerrar
        printf("Digite o nome do atleta (ou digite 'fim' para encerrar): ");
        scanf("%s", nome);
    }

    printf("Programa encerrado.\n");

    return 0;
}
