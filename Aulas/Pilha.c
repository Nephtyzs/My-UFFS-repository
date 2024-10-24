#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha {
    char dado;
    struct Pilha* prox;
} Pilha;

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->prox = NULL;
    return pilha;
}

void empilhar(Pilha** pilha, char caractere) {
    Pilha* novo = criarPilha();
    novo->dado = caractere;
    novo->prox = *pilha;
    *pilha = novo;
}

void desempilharEImprimir(Pilha** pilha) {
    Pilha* atual = *pilha;
    while (atual != NULL) {
        printf("%c", atual->dado);
        Pilha* proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    *pilha = NULL;
}

int main() {
    Pilha* pilha = criarPilha();
    char caractere;

    printf("Digite uma string (caractere por caractere):\n");
    while ((caractere = getchar()) != '\n') {
        empilhar(&pilha, caractere);
    }

    printf("String armazenada na pilha: ");
    desempilharEImprimir(&pilha);

    return 0;
}