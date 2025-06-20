/*
 * Programa: Condicionais em C
 * Autor: Luis André Santos
 * Objetivo: Demonstração prática de condicionais if-else else-if em C
 * Descrição: O programa analisa se o número inserido por imput de usuário é inteiro,
 *            positivo, negativo ou zero.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("Positive number\n");
    }
    else if(number < 0) {
        printf("Negative number\n");
    }
    else {
        printf("Zero\n");
    }

    return 0;
}