#include <stdio.h>
// Disciplina: Algoritimos e Estrutura de Dados
// Professor: Wesley Viana Pereira
// Autor: Moisés Miranda Vilas Boas
// Data: 28/10/2023
void encontraMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int n = 20;
    int potencia[n];
    
    printf("Digite os 20 valores de potencia:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &potencia[i]);
    }
    int max, min;

    encontraMaxMin(potencia, n, &max, &min);

    printf("\nPotencia maxima: %d W\n", max);
    printf("Potencia minima: %d W\n", min);

    return 0;
}