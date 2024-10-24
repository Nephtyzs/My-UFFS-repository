#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int extraiDia(Data data) {
    return data.dia;
}

int comparaDatas(Data data1, Data data2) {
    if (data1.ano != data2.ano) {
        return (data1.ano < data2.ano) ? -1 : 1;
    }
    if (data1.mes != data2.mes) {
        return (data1.mes < data2.mes) ? -1 : 1;
    }
    if (data1.dia != data2.dia) {
        return (data1.dia < data2.dia) ? -1 : 1;
    }
    return 0; 
}

int main() {
    Data data1 = {15, 8, 2023};
    Data data2 = {15, 8, 2024};

    int dia = extraiDia(data1);
    printf("Dia extraído: %d\n", dia);

    int comparacao = comparaDatas(data1, data2);
    if (comparacao == -1) {
        printf("Data1 é a data anterior de Data2\n");
    } else if (comparacao == 1) {
        printf("Data1 é após a Data2\n");
    } else {
        printf("Data1 e Data2 são iguais\n");
    }

    return 0;
}
