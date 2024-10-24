#include <stdio.h>

int somatorio(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    return vetor[tamanho - 1] + somatorio(vetor, tamanho - 1);
}
//tes
int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int resultado = somatorio(vetor, n);
    
    printf("O somatório dos elementos do vetor é %d\n", resultado);
    
    return 0;
}
