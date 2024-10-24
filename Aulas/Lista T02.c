#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int matricula;
    float notas[5];
    struct Node* proximo;
} Node;

void adicionarAluno(Node** cabeca, int matricula, float notas[5]) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->matricula = matricula;
    for (int i = 0; i < 5; i++) {
        novo->notas[i] = notas[i];
    }
    novo->proximo = *cabeca;
    *cabeca = novo;
}

float calcularMedia(float notas[5]) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    return soma / 5;
}

int main() {
    Node* lista = NULL;
    int matricula;
    float notas[5];
    float somaGeral = 0;
    int contador = 0;
    while (1) {
        printf("Matrícula: ");
        scanf("%d", &matricula);
        if (matricula == 0) break;
        for (int i = 0; i < 5; i++) {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas[i]);
        }
        adicionarAluno(&lista, matricula, notas);
        float media = calcularMedia(notas);
        printf("Aluno: %d Média: %.2f\n", matricula, media);
        somaGeral += media;
        contador++;
    }
    printf("Média geral da turma: %.2f\n", somaGeral / contador);
    return 0;
}
