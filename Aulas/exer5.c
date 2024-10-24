#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fraction;

Fraction setFraction(int numerador, int denominador) {
    Fraction frac;
    frac.numerador = numerador;
    frac.denominador = denominador;
    return frac;
}

Fraction multFraction(Fraction frac1, Fraction frac2) {
    Fraction resultado;
    resultado.numerador = frac1.numerador * frac2.numerador;
    resultado.denominador = frac1.denominador * frac2.denominador;
    return resultado;
}

int main() {
    Fraction frac1 = setFraction(4, 5);
    Fraction frac2 = setFraction(3, 2);

    Fraction resultado = multFraction(frac1, frac2);

    printf("Resultado da multiplicação: %d/%d\n", resultado.numerador, resultado.denominador);

    return 0;
}
