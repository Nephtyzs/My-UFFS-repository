#include <stdio.h>
#include <stdlib.h>

typedef struct Fila {
    char dado;
    struct Fila* prox;
} Fila;

Fila* criarFila() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->prox = NULL;
    return fila;
}

void inserirNaFila(Fila** fila, char caractere) {
    Fila* novo = criarFila();
    novo->dado = caractere;
    novo->prox = *fila;
    *fila = novo;
}

void imprimirEsvaziarFila(Fila** fila) {
    Fila* atual = *fila;
    while (atual != NULL) {
        printf("%c", atual->dado);
        Fila* proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    *fila = NULL;
}

int main() {
    Fila* fila = criarFila();
    char caractere;

    printf("Digite uma string (caractere por caractere):\n");
    while ((caractere = getchar()) != '\n') {
        inserirNaFila(&fila, caractere);
    }

    printf("String armazenada na fila: ");
    imprimirEsvaziarFila(&fila);

    return 0;
}