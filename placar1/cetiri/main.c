#include <stdio.h>

int main() {
    int vetor[3];
    int k, j, aux, dif1, dif2, result;

    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    //ordenar com bubble sort
    for (k = 1; k < 3; k++) {
        for (j = 0; j < 3 - k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    dif1 = vetor[1] - vetor[0];
    dif2 = vetor[2] - vetor[1];
    if(dif1 == dif2) {
        result = vetor[2] + dif1;
    } else if(dif1 < dif2) {
        result = vetor[1] + dif1;
    } else {
        result = vetor[0] + dif2;
    }
    printf("%d\n", result);
    return 0;
}